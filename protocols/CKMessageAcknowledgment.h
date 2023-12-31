
@protocol CKMessageAcknowledgment <NSObject>

@required

- (UIColor *)acknowledgmentImageColor;
- (NSString *)acknowledgmentImageName;
- (long long)messageAcknowledgmentType;
- (UIColor *)selectedAcknowledgmentImageColor;
- (UIColor *)selectedBalloonColor;

@end
