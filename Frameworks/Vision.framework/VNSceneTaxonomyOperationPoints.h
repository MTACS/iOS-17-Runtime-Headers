
@interface VNSceneTaxonomyOperationPoints : VNOperationPoints {
    unsigned long long  _cachedHashValue;
    NSString * _frameworkOperationPointsIdentifier;
    NSMapTable * _labelToOperationPointsDataIndexMap;
    NSURL * _nonframeworkDataURL;
    struct { float x1; float x2; struct { float x_3_1_1; float x_3_1_2; } x3[9]; struct { float x_4_1_1; float x_4_1_2; } x4[9]; } * _operationPointsDataArray;
}

+ (id)URLForIdentifier:(id)arg1 error:(id*)arg2;
+ (id)loadFromIdentifier:(id)arg1 error:(id*)arg2;
+ (id)loadFromPropertyList:(id)arg1 error:(id*)arg2;
+ (id)loadFromURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_allClassificationIdentifiers;
- (const struct { float x1; float x2; struct { float x_3_1_1; float x_3_1_2; } x3[9]; struct { float x_4_1_1; float x_4_1_2; } x4[9]; }*)_operationPointsDataForClassificationIdentifier:(id)arg1 error:(id*)arg2;
- (id)_propertyListRepresentation;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)getClassificationMetrics:(id*)arg1 forClassificationIdentifier:(id)arg2 error:(id*)arg3;
- (bool)getConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id*)arg4;
- (bool)getConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id*)arg4;
- (bool)getDefaultConfidence:(float*)arg1 forClassificationIdentifier:(id)arg2 error:(id*)arg3;
- (bool)getPrecision:(float*)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id*)arg4;
- (bool)getRecall:(float*)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id*)arg4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabelToOperationPointsDataIndexMap:(id)arg1 operationPointsDataArray:(struct { float x1; float x2; struct { float x_3_1_1; float x_3_1_2; } x3[9]; struct { float x_4_1_1; float x_4_1_2; } x4[9]; }*)arg2;
- (bool)isEqual:(id)arg1;

@end
