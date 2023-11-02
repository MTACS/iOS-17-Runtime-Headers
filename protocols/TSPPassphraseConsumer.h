
@protocol TSPPassphraseConsumer <NSObject>

@optional

- (NSData *)keychainGenericItem;
- (NSString *)passphraseHint;
- (NSString *)service;

@end
