
@protocol FCAssetKeyCacheType <NSObject>

@required

- (FCInterestToken *)interestTokenForWrappingKeyIDs:(NSArray *)arg1;
- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(NSData *)arg1 forWrappingKeyID:(NSData *)arg2;
- (NSData *)wrappingKeyForWrappingKeyID:(NSData *)arg1;

@end
