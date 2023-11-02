
@interface SHSheetSceneSettings : UIApplicationSceneSettings

@property (nonatomic, readonly) long long applicationState;
@property (nonatomic, readonly) long long hostProcessType;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) SHSheetUIServiceClientContext *sessionContext;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic, readonly) id sheetConfiguration;

- (long long)applicationState;
- (long long)hostProcessType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)presentationStyle;
- (id)sessionContext;
- (id)sessionIdentifier;
- (id)sheetConfiguration;

@end
