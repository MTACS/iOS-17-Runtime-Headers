
@protocol DKWalletCardDisplayable <NSObject>

@required

- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setUniqueIdentifier:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;
- (NSString *)uniqueIdentifier;

@end
