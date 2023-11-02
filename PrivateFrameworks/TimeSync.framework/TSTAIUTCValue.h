
@interface TSTAIUTCValue : NSObject <NSCopying> {
    double  _coefficient;
    double  _constant;
    unsigned long long  _modifiedJulianDay;
    unsigned long long  _offset;
    NSDate * _taiDate;
    NSDate * _utcDate;
}

@property (nonatomic) double coefficient;
@property (nonatomic) double constant;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) unsigned long long modifiedJulianDay;
@property (nonatomic) unsigned long long offset;
@property (nonatomic, retain) NSDate *taiDate;
@property (nonatomic, retain) NSDate *utcDate;

- (void).cxx_destruct;
- (double)coefficient;
- (double)constant;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)modifiedJulianDay;
- (unsigned long long)offset;
- (void)setCoefficient:(double)arg1;
- (void)setConstant:(double)arg1;
- (void)setModifiedJulianDay:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setTaiDate:(id)arg1;
- (void)setUtcDate:(id)arg1;
- (id)taiDate;
- (id)utcDate;

@end
