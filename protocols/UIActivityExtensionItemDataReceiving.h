
@protocol UIActivityExtensionItemDataReceiving <NSObject>

@required

+ (Class)classForPreparingExtensionItemData;

- (void)prepareWithActivityExtensionItemData:(UISUIActivityExtensionItemData *)arg1;
- (void)prepareWithActivityItemData:(UISDActivityItemData *)arg1;

@end
