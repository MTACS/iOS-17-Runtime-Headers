
@interface SBFObliterationController : NSObject

+ (id)sharedInstance;

- (void)_doObliterateWithType:(struct __CFString { }*)arg1 eraseDataPlan:(bool)arg2 showingProgress:(bool)arg3 options:(id)arg4;
- (void)markObliterationStart;
- (void)obliterateDataPartitionShowingProgress:(bool)arg1 skipDataObliteration:(bool)arg2 eraseDataPlan:(bool)arg3 reason:(id)arg4;
- (void)wipeAndBrickShowingProgress:(bool)arg1 reason:(id)arg2;

@end
