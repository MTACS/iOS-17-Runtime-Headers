
@interface _UITextInputSessionEfficacyAccumulator : NSObject {
    NSMutableDictionary * _entries;
    NSString * _keyboardLayout;
    NSDictionary * _keyboardTrialParameters;
    NSString * _keyboardType;
    NSString * _keyboardVariant;
    NSString * _language;
    NSString * _name;
    NSString * _region;
    NSMutableSet * _sessionErrors;
    bool  _sessionIsModeless;
}

@property (nonatomic, copy) NSDictionary *keyboardTrialParameters;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)accumulatorWithName:(id)arg1;
+ (id)getOrInitializeArrayFromArray:(id)arg1 forKey:(unsigned long long)arg2 initCapacity:(unsigned long long)arg3;
+ (id)getOrInitializeArrayFromDictionary:(id)arg1 forKey:(id)arg2 initCapacity:(unsigned long long)arg3;
+ (id)getOrInitializeDictionaryFrom:(id)arg1 forKey:(unsigned long long)arg2 initCapacity:(long long)arg3;

- (void).cxx_destruct;
- (id)cleanIdForPublishing:(id)arg1;
- (id)computeSessionActionsStringOnSession:(id)arg1;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)arg1;
- (id)generateSessionErrorStringFromSet:(id)arg1;
- (void)increaseCountForAppBundleId:(id)arg1 forSource:(long long)arg2 forActionType:(long long)arg3 forFlagOptions:(long long)arg4 forInputModeKey:(id)arg5 byAccumulatorEntry:(id)arg6;
- (void)increaseWithAction:(id)arg1;
- (id)init;
- (bool)isPrimaryInput:(long long)arg1;
- (id)keyboardTrialParameters;
- (void)logErrorCodeIfNotNil:(id)arg1;
- (id)name;
- (void)reset;
- (void)setKeyboardTrialParameters:(id)arg1;

@end
