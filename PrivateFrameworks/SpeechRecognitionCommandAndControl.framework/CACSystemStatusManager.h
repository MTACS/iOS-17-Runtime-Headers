
@interface CACSystemStatusManager : NSObject {
    bool  _isDictationRunning;
}

@property (nonatomic) bool isDictationRunning;

+ (id)sharedManager;

- (void)_systemDictationStatusDidChange:(bool)arg1;
- (id)init;
- (bool)isDictationRunning;
- (bool)isSystemDictationRunning;
- (void)setIsDictationRunning:(bool)arg1;

@end
