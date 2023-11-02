
@interface MLProgramTrainingDelta : NSObject {
    NSData * _flattenedModelUpdate;
}

@property (nonatomic, readonly) NSData *flattenedModelUpdate;

- (void).cxx_destruct;
- (id)flattenedModelUpdate;
- (id)initWithFlattenedModelUpdate:(id)arg1;

@end
