
@interface _WBSFieldLabelPatternMatcherFactory : NSObject {
    NSMutableDictionary * _trie;
}

+ (struct __WBSFieldLabelPatternMatcherArray { }*)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg1 allowingEndOfWordMatches:(bool)arg2;

- (void).cxx_destruct;
- (void)_addWord:(id)arg1 allowingEndOfWordMatch:(bool)arg2;
- (id)init;

@end
