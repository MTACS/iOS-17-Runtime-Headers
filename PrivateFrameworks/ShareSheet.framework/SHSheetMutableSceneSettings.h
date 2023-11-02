
@interface SHSheetMutableSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic) long long applicationState;
@property (nonatomic) long long hostProcessType;
@property (nonatomic) long long presentationStyle;
@property (nonatomic, retain) SHSheetUIServiceClientContext *sessionContext;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) id sheetConfiguration;

- (long long)applicationState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)hostProcessType;
- (long long)presentationStyle;
- (id)sessionContext;
- (id)sessionIdentifier;
- (void)setApplicationState:(long long)arg1;
- (void)setHostProcessType:(long long)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setSessionContext:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSheetConfiguration:(id)arg1;
- (id)sheetConfiguration;

@end
