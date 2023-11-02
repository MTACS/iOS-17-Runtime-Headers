
@interface CHRecognitionSessionIndexableContent : NSObject {
    NSString * _indexableTextRepresentation;
    NSString * _presentableTextRepresentation;
}

@property (nonatomic, readonly, copy) NSString *indexableTextRepresentation;
@property (nonatomic, readonly, copy) NSString *presentableTextRepresentation;

- (void).cxx_destruct;
- (id)indexableTextRepresentation;
- (id)presentableTextRepresentation;

@end
