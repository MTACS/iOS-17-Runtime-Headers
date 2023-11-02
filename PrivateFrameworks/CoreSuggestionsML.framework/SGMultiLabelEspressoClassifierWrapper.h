
@interface SGMultiLabelEspressoClassifierWrapper : NSObject {
    _PASLazyPurgeableResult * _classifier;
    NSString * _espressoModelFile;
}

@property (nonatomic, retain) _PASLazyPurgeableResult *classifier;
@property (nonatomic, retain) NSString *espressoModelFile;

- (void).cxx_destruct;
- (id)classifier;
- (id)espressoModelFile;
- (void)setClassifier:(id)arg1;
- (void)setEspressoModelFile:(id)arg1;

@end
