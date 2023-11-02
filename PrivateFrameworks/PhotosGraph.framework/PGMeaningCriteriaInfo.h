
@interface PGMeaningCriteriaInfo : NSObject {
    unsigned long long  _criteriaNumber;
    NSString * _meaningLabel;
    double  _version;
}

@property (nonatomic) unsigned long long criteriaNumber;
@property (nonatomic, retain) NSString *meaningLabel;
@property (nonatomic) double version;

- (void).cxx_destruct;
- (unsigned long long)criteriaNumber;
- (id)meaningLabel;
- (void)setCriteriaNumber:(unsigned long long)arg1;
- (void)setMeaningLabel:(id)arg1;
- (void)setVersion:(double)arg1;
- (double)version;

@end
