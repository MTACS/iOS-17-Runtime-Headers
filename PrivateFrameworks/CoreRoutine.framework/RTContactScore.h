
@interface RTContactScore : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contactID;
    unsigned long long  _frequencyCount;
    double  _frequencyScore;
    double  _recencyScore;
    double  _runningMean;
    double  _runningMeanOfSquares;
    double  _significanceScore;
}

@property (nonatomic, readonly) NSString *contactID;
@property (nonatomic) unsigned long long frequencyCount;
@property (nonatomic) double frequencyScore;
@property (nonatomic) double recencyScore;
@property (nonatomic) double runningMean;
@property (nonatomic) double runningMeanOfSquares;
@property (nonatomic) double significanceScore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frequencyCount;
- (double)frequencyScore;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactID:(id)arg1 frequencyScore:(double)arg2 recencyScore:(double)arg3 significanceScore:(double)arg4 frequencyCount:(unsigned long long)arg5 runningMean:(double)arg6 runningMeanOfSquares:(double)arg7;
- (bool)isEqual:(id)arg1;
- (void)mergeWithAnotherContactScore:(id)arg1;
- (double)recencyScore;
- (double)runningMean;
- (double)runningMeanOfSquares;
- (void)setFrequencyCount:(unsigned long long)arg1;
- (void)setFrequencyScore:(double)arg1;
- (void)setRecencyScore:(double)arg1;
- (void)setRunningMean:(double)arg1;
- (void)setRunningMeanOfSquares:(double)arg1;
- (void)setSignificanceScore:(double)arg1;
- (double)significanceScore;

@end
