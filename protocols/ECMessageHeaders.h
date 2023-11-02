
@protocol ECMessageHeaders <NSCopying, NSObject>

@required

- (NSArray *)allHeaderKeys;
- (NSData *)encodedHeaders;
- (NSString *)firstAddressForKey:(NSString *)arg1;
- (NSString *)firstHeaderForKey:(NSString *)arg1;
- (NSString *)firstSenderAddress;
- (NSArray *)headersForKey:(NSString *)arg1;
- (NSArray *)listUnsubscribeCommands;
- (NSString *)listUnsubscribePostContent;

@end
