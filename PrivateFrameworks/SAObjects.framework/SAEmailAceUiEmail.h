
@interface SAEmailAceUiEmail : SAEmailEmail

@property (nonatomic, copy) NSNumber *read;

+ (id)aceUiEmail;
+ (id)aceUiEmailWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)read;
- (void)setRead:(id)arg1;

@end
