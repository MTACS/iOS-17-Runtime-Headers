
@protocol ATXUICacheProtocol <NSObject, NSSecureCoding, ATXProtoBufWrapper>

@required

- (NSString *)compactDescription;
- (void)setUuid:(NSUUID *)arg1;
- (NSUUID *)uuid;

@end
