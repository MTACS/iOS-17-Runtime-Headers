
@protocol SFWebPageStatusBarMessage <NSObject>

@required

- (NSAttributedString *)attributedMessageString;
- (bool)isEmpty;

@end
