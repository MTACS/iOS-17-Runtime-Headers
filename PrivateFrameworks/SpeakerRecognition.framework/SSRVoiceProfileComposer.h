
@interface SSRVoiceProfileComposer : NSObject

+ (id)sharedTrainer;

- (bool)addUtterance:(id)arg1 toProfile:(id)arg2;
- (bool)addUtterance:(id)arg1 toProfile:(id)arg2 withAsset:(id)arg3;

@end
