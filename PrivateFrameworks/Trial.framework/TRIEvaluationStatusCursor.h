
@interface TRIEvaluationStatusCursor : NSObject <NSCopying, NSSecureCoding> {
    double  _secondsFromEpoch;
}

@property (nonatomic, readonly) NSDate *date;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecondsFromEpoch:(double)arg1;
- (bool)isEqual:(id)arg1;

@end
