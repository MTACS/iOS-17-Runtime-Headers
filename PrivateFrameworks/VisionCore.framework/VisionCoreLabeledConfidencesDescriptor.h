
@interface VisionCoreLabeledConfidencesDescriptor : VisionCoreTensorDescriptor {
    NSURL * _labelsFileURL;
    NSArray * _lazilyAcquiredLabels;
    NSIndexSet * _lazilyAcquiredValidLabelIndexs;
}

@property (readonly, copy) NSArray *labels;
@property (nonatomic, readonly) Class labelsFileParserClass;
@property (nonatomic, readonly) NSURL *labelsFileURL;
@property (readonly, copy) NSArray *sortedValidLabels;
@property (readonly, copy) NSIndexSet *validLabelIndexes;
@property (readonly) unsigned long long validLabelsCount;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 dataType:(unsigned long long)arg2 shape:(id)arg3 strides:(id)arg4 labelsFileURL:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)labels;
- (Class)labelsFileParserClass;
- (id)labelsFileURL;
- (id)sortedValidLabels;
- (id)validLabelIndexes;
- (unsigned long long)validLabelsCount;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (id)newClassificationObservationsFromOutputObjects:(id)arg1 originatingRequestSpecifier:(id)arg2 operationPointsProvider:(id)arg3 error:(id*)arg4;
- (id)newClassificationObservationsFromTensorData:(id)arg1 originatingRequestSpecifier:(id)arg2 operationPointsProvider:(id)arg3 error:(id*)arg4;

@end
