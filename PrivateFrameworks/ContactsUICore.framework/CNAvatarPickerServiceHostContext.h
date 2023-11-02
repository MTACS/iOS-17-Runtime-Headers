
@interface CNAvatarPickerServiceHostContext : NSExtensionContext <CNAvatarPickerServiceHostProtocol> {
    <CNAvatarPickerServiceHostProtocol> * _exportedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CNAvatarPickerServiceHostProtocol> *exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)avatarPickerExtensionDidCancel;
- (void)avatarPickerExtensionDidCreateAvatarWithRecordData:(id)arg1 identifier:(id)arg2;
- (void)avatarPickerExtensionDidDeleteAvatarWithIdentifier:(id)arg1;
- (void)avatarPickerExtensionDidFinishWithImageData:(id)arg1 memojiMetadata:(id)arg2;
- (void)avatarPickerExtensionDidRequestMemojiEditorPresentationForRecordIdentifier:(id)arg1;
- (void)avatarPickerExtensionDidSelectItemWithImageData:(id)arg1 memojiMetadata:(id)arg2;
- (id)exportedObject;
- (id)remoteProxy;
- (void)setExportedObject:(id)arg1;

@end
