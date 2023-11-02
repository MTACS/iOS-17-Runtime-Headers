
@protocol ATXModeEntityProtocol <NSObject, NSSecureCoding, NSCopying, ATXModeEntityJsonProtocol>

@required

- (NSString *)identifier;
- (ATXModeEntityScore *)scoreMetadata;
- (void)setScoreMetadata:(ATXModeEntityScore *)arg1;

@end
