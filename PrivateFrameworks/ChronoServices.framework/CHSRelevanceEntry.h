
@interface CHSRelevanceEntry : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    double  _duration;
    bool  _hasRelevance;
    double  _score;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) bool hasRelevance;
@property (nonatomic, readonly) double score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRelevance;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 score:(double)arg2 duration:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)score;

@end
