
@interface IPFeatureSentenceFragment : NSObject {
    unsigned long long  _clusterType;
    double  _probability_Confirmation;
    double  _probability_None;
    double  _probability_Proposal;
    double  _probability_Rejection;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property unsigned long long clusterType;
@property (nonatomic, readonly) unsigned long long mainPolarity;
@property double probability_Confirmation;
@property double probability_None;
@property double probability_Proposal;
@property double probability_Rejection;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

+ (id)fragmentWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 clusterType:(unsigned long long)arg2;

- (unsigned long long)clusterType;
- (id)description;
- (unsigned long long)mainPolarity;
- (double)probability_Confirmation;
- (double)probability_None;
- (double)probability_Proposal;
- (double)probability_Rejection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setClusterType:(unsigned long long)arg1;
- (void)setProbability_Confirmation:(double)arg1;
- (void)setProbability_None:(double)arg1;
- (void)setProbability_Proposal:(double)arg1;
- (void)setProbability_Rejection:(double)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end