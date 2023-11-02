
@interface _PSContactEmbedding : NSObject {
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

- (void).cxx_destruct;
- (id)convertToNSArrayFromMLMultiArray:(id)arg1;
- (id)getEmbeddingForContact:(id)arg1;
- (id)getEmbeddingFromFeatureDict:(id)arg1;
- (id)getEmbeddingsForContacts:(id)arg1;
- (id)init;
- (id)initWithModel:(id)arg1;
- (id)model;

@end
