
@interface _EARSystemResult : NSObject {
    NSArray * _confidences;
    NSArray * _nBestIndexes;
    NSArray * _sausage;
}

@property (nonatomic, copy) NSArray *confidences;
@property (nonatomic, copy) NSArray *nBestIndexes;
@property (nonatomic, copy) NSArray *sausage;

- (void).cxx_destruct;
- (id)confidences;
- (id)nBestIndexes;
- (id)sausage;
- (void)setConfidences:(id)arg1;
- (void)setNBestIndexes:(id)arg1;
- (void)setSausage:(id)arg1;

@end
