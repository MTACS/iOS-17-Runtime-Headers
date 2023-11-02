
@interface SBSFeatureFlag : NSObject {
    NSString * _domain;
    NSString * _feature;
    NSNumber * _value;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *feature;
@property (nonatomic, copy) NSNumber *value;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)domain;
- (id)feature;
- (id)initWith:(id)arg1 andFeature:(id)arg2 andValue:(id)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setFeature:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
