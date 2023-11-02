
@interface TIRecentInputs : TILexicon {
    NSString * _filePath;
    bool  _needsSync;
}

@property (nonatomic, retain) NSString *filePath;
@property (nonatomic) bool needsSync;

+ (id)_lexiconPathForLocalIdentifier:(id)arg1;
+ (id)_sanitizeRecentInputString:(id)arg1;
+ (void)clearRecentInputForIdentifier:(id)arg1;
+ (bool)identifierIsSystemIdentifier:(id)arg1;
+ (id)recentInputAtPath:(id)arg1;
+ (id)recentInputForIdentifier:(id)arg1;
+ (void)recentInputForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)removeInput:(id)arg1 forSystemIdentifier:(id)arg2;
+ (void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1;
+ (void)storeInput:(id)arg1 forLocalIdentifier:(id)arg2;
+ (void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2;
+ (void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 atPath:(id)arg3;
+ (bool)validateInputFormat:(id)arg1 forIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filePath;
- (id)lexiconByRemovingEntry:(id)arg1;
- (id)lexiconWithAdditionalEntry:(id)arg1 maximumSize:(long long)arg2;
- (bool)needsSync;
- (void)setFilePath:(id)arg1;
- (void)setNeedsSync:(bool)arg1;
- (void)storeIfNecessary;

@end
