
@interface IATextInputActionsAccumulator : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _depthRange;
    NSMutableDictionary * _entries;
    id /* block */  _eventHandler;
    long long  _inputActions;
    NSString * _keyboardLayout;
    NSString * _keyboardType;
    NSString * _keyboardVariant;
    NSString * _language;
    NSString * _name;
    long long  _netCharacters;
    long long  _netEmojiCharacters;
    NSString * _region;
    bool  _sessionIsModeless;
    long long  _userRemovedCharacters;
    long long  _userRemovedEmojiCharacters;
    NSString * kUnknownBundleId;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } depthRange;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)accumulatorWithName:(id)arg1;
+ (id)getOrInitializeArrayFromArray:(id)arg1 forKey:(unsigned long long)arg2 initCapacity:(unsigned long long)arg3;
+ (id)getOrInitializeArrayFromDictionary:(id)arg1 forKey:(id)arg2 initCapacity:(unsigned long long)arg3;
+ (id)getOrInitializeDictionaryFrom:(id)arg1 forKey:(unsigned long long)arg2 initCapacity:(long long)arg3;

- (void).cxx_destruct;
- (id)computeSessionActionsStringOnSession:(id)arg1;
- (void)consumeAction:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })depthRange;
- (void)enumerateTextInputActionsAnalytics;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)arg1;
- (id /* block */)eventHandler;
- (void)increaseCountForAppBundleId:(id)arg1 forSource:(long long)arg2 forActionType:(long long)arg3 forFlagOptions:(long long)arg4 forInputModeKey:(id)arg5 byAccumulatorEntry:(id)arg6;
- (id)initWithEventHandler:(id /* block */)arg1;
- (id)name;
- (void)reset;
- (void)setEventHandler:(id /* block */)arg1;

@end
