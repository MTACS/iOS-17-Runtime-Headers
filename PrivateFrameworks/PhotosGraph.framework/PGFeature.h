
@interface PGFeature : NSObject {
    NSString * _name;
    unsigned long long  _type;
    id  _typeSpecificIdentifier;
}

@property (readonly) bool isNoneFeature;
@property (readonly) NSString *name;
@property (readonly) unsigned long long type;

+ (id)featureWithMeaningfulEvent:(id)arg1;
+ (id)featureWithNode:(id)arg1;
+ (id)featureWithType:(unsigned long long)arg1 name:(id)arg2;
+ (id)featureWithType:(unsigned long long)arg1 node:(id)arg2;
+ (id)featuresForEncodedFeatures:(id)arg1;
+ (id)nameForNode:(id)arg1;
+ (id)noneFeatureWithType:(unsigned long long)arg1;
+ (id)stringForFeatureType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)encodedFeature;
- (unsigned long long)hash;
- (id)initWithEncodedFeature:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNoneFeature;
- (id)name;
- (id)nodeInGraph:(id)arg1;
- (unsigned long long)type;

@end
