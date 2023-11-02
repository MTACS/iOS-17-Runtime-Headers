
@interface CDMSpanMatchDataUpdateCommand : CDMBaseCommand {
    CKVocabularySearcher * _searcher;
    NSString * _userId;
}

@property (nonatomic, readonly) CKVocabularySearcher *searcher;
@property (nonatomic, readonly) NSString *userId;

- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1;
- (id)searcher;
- (id)userId;

@end
