
@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList {
    bool  _sensitive;
    NSOrderedSet * _words;
}

@property (getter=isSensitive, nonatomic, readonly) bool sensitive;

- (void).cxx_destruct;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(id /* block */)arg2;
- (id)initWithIdentifier:(id)arg1 isSensitive:(bool)arg2 orderedWords:(id)arg3;
- (id)initWithIdentifier:(id)arg1 isSensitive:(bool)arg2 orderedWordsArray:(id)arg3;
- (bool)isSensitive;

@end
