
@protocol ICMutableLiveLinkIdentity <NSObject>

@required

- (NSString *)externalIdentifier;
- (NSURL *)imageURL;
- (NSPersonNameComponents *)nameComponents;
- (void)setExternalIdentifier:(NSString *)arg1;
- (void)setImageURL:(NSURL *)arg1;
- (void)setNameComponents:(NSPersonNameComponents *)arg1;

@end
