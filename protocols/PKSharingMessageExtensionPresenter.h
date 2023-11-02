
@protocol PKSharingMessageExtensionPresenter <NSObject>

@required

+ (Class)messageClass;
+ (PKSharingMessageExtensionViewProperties *)propertiesForMessage:(id <PKSharingMessageExtensionMessage>)arg1;

- (void)didTapMessage;
- (void)extensionWillAppear;
- (<PKSharingMessageExtensionMessage> *)message;
- (<PKSharingMessageExtensionRenderer> *)renderer;
- (void)setMessage:(id <PKSharingMessageExtensionMessage>)arg1;
- (void)setRenderer:(id <PKSharingMessageExtensionRenderer>)arg1;
- (void)validateForRecipients:(void *)arg1 senderAddress:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*

@end
