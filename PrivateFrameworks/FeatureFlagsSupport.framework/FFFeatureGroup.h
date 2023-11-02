
@interface FFFeatureGroup : NSObject {
    NSDictionary * _attributes;
    NSString * _disclosure;
    NSDictionary * _featureSets;
    NSString * _name;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic, retain) NSString *disclosure;
@property (nonatomic, retain) NSDictionary *featureSets;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)attributes;
- (id)disclosure;
- (id)featureSets;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setAttributes:(id)arg1;
- (void)setDisclosure:(id)arg1;
- (void)setFeatureSets:(id)arg1;

@end
