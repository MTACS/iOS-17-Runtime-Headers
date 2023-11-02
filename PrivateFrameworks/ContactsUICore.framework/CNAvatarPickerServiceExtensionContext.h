
@interface CNAvatarPickerServiceExtensionContext : NSExtensionContext <CNAvatarPickerServiceExtensionProtocol> {
    <CNAvatarPickerServiceExtensionProtocol> * _exportedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CNAvatarPickerServiceExtensionProtocol> *exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)exportedObject;
- (void)overrideUserInterfaceStyle:(long long)arg1;
- (id)remoteProxy;
- (void)setCurrentMemojiMetadata:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setSelectedRecordIdentifier:(id)arg1;
- (void)setSetupUserAvatarRecords:(id)arg1;

@end
