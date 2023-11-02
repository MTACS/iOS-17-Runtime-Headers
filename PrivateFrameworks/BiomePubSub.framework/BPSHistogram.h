
@interface BPSHistogram : NSObject {
    NSMutableDictionary * _backingDictionary;
    NSArray * _keyType;
}

- (void).cxx_destruct;
- (bool)_correctKeyType:(id)arg1;
- (void)_enumerateWithBlock:(id /* block */)arg1 node:(id)arg2 currentKey:(id)arg3 stop:(bool*)arg4;
- (void)_setKeyTypeFromKey:(id)arg1;
- (void)addScore:(id)arg1 forKey:(id)arg2;
- (id)allKeysAtLevel:(unsigned long long)arg1;
- (void)enumerateKeysAndScoresUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)removeAllScores;
- (void)removeScoreForKey:(id)arg1;
- (id)scoreForKey:(id)arg1;

@end
