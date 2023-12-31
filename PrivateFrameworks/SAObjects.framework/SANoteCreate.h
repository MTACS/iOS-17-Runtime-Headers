
@interface SANoteCreate : SADomainCommand

@property (nonatomic, copy) NSString *contents;

+ (id)create;
+ (id)createWithDictionary:(id)arg1 context:(id)arg2;

- (id)contents;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContents:(id)arg1;

@end
