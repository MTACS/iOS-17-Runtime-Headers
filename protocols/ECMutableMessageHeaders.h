
@protocol ECMutableMessageHeaders <ECMessageHeaders>

@required

- (void)removeHeaderForKey:(NSString *)arg1;
- (void)setAddressList:(NSArray *)arg1 forKey:(NSString *)arg2;
- (void)setAddressListForSender:(NSArray *)arg1;
- (void)setAddressListForTo:(NSArray *)arg1;
- (void)setHeader:(id)arg1 forKey:(NSString *)arg2;

@end
