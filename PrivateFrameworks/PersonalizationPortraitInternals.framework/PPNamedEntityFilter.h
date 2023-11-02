
@interface PPNamedEntityFilter : NSObject {
    MLModel * _model;
}

- (void).cxx_destruct;
- (id)filterNamedEntityRecords:(id)arg1;
- (id)filterScoredNamedEntities:(id)arg1;
- (id)init;
- (id)initWithModel:(id)arg1;
- (bool)isAcceptableRecord:(id)arg1;

@end
