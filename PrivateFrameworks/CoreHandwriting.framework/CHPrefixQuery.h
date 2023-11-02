
@interface CHPrefixQuery : CHQuery {
    NSArray * _foundItems;
    NSString * _prefix;
    NSCharacterSet * _queryDelimiters;
    NSSet * _validSuffixes;
}

@property (nonatomic, readonly, copy) NSArray *foundItems;
@property (nonatomic, readonly, copy) NSString *prefix;
@property (nonatomic, copy) NSSet *validSuffixes;

+ (id)hashtagQueryForRecognitionSession:(id)arg1;
+ (id)mentionQueryForRecognitionSession:(id)arg1;
+ (id)prefixQueryWithPrefix:(id)arg1 forRecognitionSession:(id)arg2;

- (void).cxx_destruct;
- (bool)_isTokenStringMatchingQuery:(id)arg1 allowPartialMatching:(bool)arg2;
- (id)_prefixQueryResultsForSessionResult:(id)arg1;
- (id)debugName;
- (id)foundItems;
- (id)prefix;
- (void)q_updateQueryResult;
- (void)setValidSuffixes:(id)arg1;
- (id)validSuffixes;

@end
