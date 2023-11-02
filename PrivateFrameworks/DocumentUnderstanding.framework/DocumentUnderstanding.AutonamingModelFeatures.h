
@interface DocumentUnderstanding.AutonamingModelFeatures : NSObject <NSCoding, NSCopying> {
    void annotation;
    void cooccurrenceKey;
    void featureMap;
    void groundTruthAvailable;
    void listFeatureMap;
}

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
