
@protocol CPUIMessageCellConfigurationProtocol <NSObject>

@optional

- (NSString *)detailText;
- (bool)enabled;
- (UIImage *)image;
- (bool)isUnread;
- (bool)showsMute;
- (bool)showsPin;
- (bool)showsStar;
- (NSString *)text;
- (UIImage *)trailingImage;
- (NSString *)trailingText;

@end
