
@protocol UIActivityExtensionItemDataTarget <NSObject>

@required

+ (Class)classForPreparingExtensionItemData;

- (void)prepareWithActivityExtensionItemData:(UISUIActivityExtensionItemData *)arg1;

@end
