
@interface SAAISearchCompleted : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *results;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)results;
- (void)setResults:(id)arg1;

@end
