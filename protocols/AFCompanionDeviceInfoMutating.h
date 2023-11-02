
@protocol AFCompanionDeviceInfoMutating <NSObject>

@required

- (void)setAceHost:(NSString *)arg1;
- (void)setAssistantID:(NSString *)arg1;
- (void)setIdsIdentifier:(NSString *)arg1;
- (void)setMeDevice:(bool)arg1;
- (void)setMuxSupportCapability:(bool)arg1;
- (void)setPeerToPeerHandoffCapability:(bool)arg1;
- (void)setProductPrefix:(NSString *)arg1;
- (void)setSiriLanguage:(NSString *)arg1;
- (void)setSpeechID:(NSString *)arg1;
- (void)setSyncMetadata:(NSDictionary *)arg1;
- (void)setSyncMetadataCapability:(bool)arg1;

@end
