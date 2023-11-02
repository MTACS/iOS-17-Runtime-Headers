
@interface TUDialAssist : NSObject {
    int  _dialAssistUserSettingsChangedToken;
}

@property (nonatomic, readonly) int dialAssistUserSettingsChangedToken;

+ (id)sharedInstance;

- (void)dealloc;
- (int)dialAssistUserSettingsChangedToken;
- (id)init;

@end
