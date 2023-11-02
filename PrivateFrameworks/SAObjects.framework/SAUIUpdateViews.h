
@interface SAUIUpdateViews : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *views;

+ (id)updateViews;
+ (id)updateViewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setViews:(id)arg1;
- (id)views;

@end
