
@interface DocumentUnderstanding.DUEncodingModelOutput : NSObject <NSCoding, NSCopying> {
    void hiddenLayerSize;
    void hiddenLayerValues;
    void modelName;
    void nHiddenLayers;
    void pooledHiddenLayerValues;
    void sequenceSize;
}

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
