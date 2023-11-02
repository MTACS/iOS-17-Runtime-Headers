
@interface CHIndexableContentQuery : CHQuery {
    CHRecognitionSessionIndexableContent * _indexableContent;
}

@property (readonly) CHRecognitionSessionIndexableContent *indexableContent;

- (void).cxx_destruct;
- (id)debugName;
- (id)indexableContent;
- (id)initWithRecognitionSession:(id)arg1;
- (void)q_updateQueryResult;

@end
