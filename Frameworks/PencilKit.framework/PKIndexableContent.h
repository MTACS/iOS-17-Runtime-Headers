
@interface PKIndexableContent : NSObject {
    CHRecognitionSessionIndexableContent * _chIndexableContent;
}

@property (retain) CHRecognitionSessionIndexableContent *chIndexableContent;
@property (nonatomic, readonly) NSString *indexableTextRepresentation;
@property (nonatomic, readonly) NSString *presentableTextRepresentation;

- (void).cxx_destruct;
- (id)chIndexableContent;
- (id)indexableTextRepresentation;
- (id)initWithIndexableContent:(id)arg1;
- (id)presentableTextRepresentation;
- (void)setChIndexableContent:(id)arg1;

@end
