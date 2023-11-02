
@interface PPSpotlightScoringFeatureVector : NSObject {
    NSMutableSet * _features;
}

+ (id)decodeFeatureVectorFromData:(id)arg1 version:(id)arg2;
+ (id)featureVectorVersion;

- (void).cxx_destruct;
- (void)addQidString:(id)arg1;
- (bool)containsQidString:(id)arg1;
- (id)encodeAsData;
- (id)init;
- (id)qidStrings;

@end
