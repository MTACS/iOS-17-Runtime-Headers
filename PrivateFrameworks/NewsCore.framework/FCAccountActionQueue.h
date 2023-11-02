
@interface FCAccountActionQueue : NSObject {
    FCPersistentDictionary * _persistentDictionary;
}

@property (nonatomic, retain) FCPersistentDictionary *persistentDictionary;

- (void).cxx_destruct;
- (bool)enqueueActionWithType:(long long)arg1;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (id)peekAtActionTypes;
- (id)persistentDictionary;
- (bool)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(bool)arg2;
- (bool)readLocalDataHint;
- (void)setPersistentDictionary:(id)arg1;

@end
