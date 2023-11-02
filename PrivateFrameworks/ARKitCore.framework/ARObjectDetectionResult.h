
@interface ARObjectDetectionResult : NSObject {
    ARReferenceObject * _referenceObject;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
}

@property (nonatomic, retain) ARReferenceObject *referenceObject;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;

- (void).cxx_destruct;
- (bool)isEqual:(id)arg1;
- (id)referenceObject;
- (void)setReferenceObject:(id)arg1;
- (void)setVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;

@end
