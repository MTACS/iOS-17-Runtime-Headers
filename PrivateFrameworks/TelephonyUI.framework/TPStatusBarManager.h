
@interface TPStatusBarManager : NSObject {
    NSTimer * _callDurationTimer;
    NSString * _currentAbbreviatedStatusBarString;
}

@property (nonatomic, retain) NSTimer *callDurationTimer;
@property (nonatomic, copy) NSString *currentAbbreviatedStatusBarString;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)callDurationTimer;
- (id)currentAbbreviatedStatusBarString;
- (void)dealloc;
- (id)init;
- (void)setCallDurationTimer:(id)arg1;
- (void)setCurrentAbbreviatedStatusBarString:(id)arg1;
- (void)updateCurrentAbbreviatedStatusBarString;
- (void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;

@end
