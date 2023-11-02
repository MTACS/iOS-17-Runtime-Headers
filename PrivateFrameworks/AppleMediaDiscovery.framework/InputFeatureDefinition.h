
@interface InputFeatureDefinition : NSObject {
    NSString * _columnName;
    NSString * _featureId;
    AMDFeatureProvider * _featureProvider;
    NSString * _featureType;
    NSArray * _featureValues;
    NSString * _mapOp;
    NSString * _remapDictionaryId;
    NSArray * _shape;
    NSNumber * _size;
}

@property (nonatomic, retain) NSString *columnName;
@property (nonatomic, retain) NSString *featureId;
@property (nonatomic, retain) AMDFeatureProvider *featureProvider;
@property (nonatomic, retain) NSString *featureType;
@property (nonatomic, retain) NSArray *featureValues;
@property (nonatomic, retain) NSString *mapOp;
@property (nonatomic, retain) NSString *remapDictionaryId;
@property (nonatomic, retain) NSArray *shape;
@property (nonatomic, retain) NSNumber *size;

- (void).cxx_destruct;
- (id)columnName;
- (id)featureId;
- (id)featureProvider;
- (id)featureType;
- (id)featureValues;
- (id)initWithDictionary:(id)arg1;
- (bool)isValid;
- (id)mapOp;
- (id)remapDictionaryId;
- (void)setColumnName:(id)arg1;
- (void)setFeatureId:(id)arg1;
- (void)setFeatureProvider:(id)arg1;
- (void)setFeatureType:(id)arg1;
- (void)setFeatureValues:(id)arg1;
- (void)setMapOp:(id)arg1;
- (void)setRemapDictionaryId:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setSize:(id)arg1;
- (id)shape;
- (id)size;

@end
