
@interface BDSReadingHistoryStreakInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    long long  _length;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) long long length;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndDate:(id)arg1 length:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)length;
- (void)setEndDate:(id)arg1;
- (void)setLength:(long long)arg1;

@end
