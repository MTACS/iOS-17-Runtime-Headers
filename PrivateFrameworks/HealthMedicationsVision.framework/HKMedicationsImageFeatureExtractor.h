
@interface HKMedicationsImageFeatureExtractor : NSObject {
    HKMedicationsTextNDCParser * _ndcParser;
}

@property (nonatomic, retain) HKMedicationsTextNDCParser *ndcParser;

- (void).cxx_destruct;
- (void)extractFeaturesFrom:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)ndcParser;
- (void)setNdcParser:(id)arg1;

@end
