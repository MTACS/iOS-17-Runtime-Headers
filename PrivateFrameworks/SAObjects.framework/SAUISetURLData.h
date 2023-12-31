
@interface SAUISetURLData : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *urlData;

+ (id)setURLData;
+ (id)setURLDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setUrlData:(id)arg1;
- (id)urlData;

@end
