
@protocol ECMIMECharset <NSObject>

@required

- (bool)canBeUsedForOutgoingMessages;
- (NSString *)charsetName;
- (NSString *)displayName;
- (unsigned long long)encoding;

@end
