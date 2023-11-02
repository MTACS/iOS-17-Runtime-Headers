
@protocol CNAvatarPickerServiceExtensionProtocol <NSObject>

@required

- (void)overrideUserInterfaceStyle:(long long)arg1;
- (void)setSelectedRecordIdentifier:(NSString *)arg1;

@optional

- (void)setCurrentMemojiMetadata:(CNMemojiMetadata *)arg1;
- (void)setSetupUserAvatarRecords:(NSArray *)arg1;

@end
