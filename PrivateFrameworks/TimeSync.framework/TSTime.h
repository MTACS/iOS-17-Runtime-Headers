
@interface TSTime : NSObject <NSCopying> {
    bool  _frequencyTraceable;
    unsigned long long  _grandmasterIdentity;
    bool  _initedWithgPTP;
    unsigned short  _localPortNumber;
    unsigned long long  _nanosecondsSinceEpoch;
    bool  _timeTraceable;
}

@property (nonatomic, readonly, copy) TSgPTPTime *gPTPTime;
@property (nonatomic, readonly, copy) TSGPSTime *gpsTime;
@property (nonatomic, readonly) unsigned long long nanosecondsSinceEpoch;
@property (nonatomic, readonly, copy) NSDate *taiDate;
@property (nonatomic, readonly, copy) NSDate *utcDate;

+ (id)timeConverter;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)gPTPTime;
- (id)gpsTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithGPSTime:(id)arg1;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1;
- (id)initWithTAIDate:(id)arg1;
- (id)initWithUTCDate:(id)arg1;
- (id)initWithgPTPTime:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)nanosecondsSinceEpoch;
- (long long)nanosecondsSinceTime:(id)arg1;
- (id)taiDate;
- (id)timeByAddingNanoseconds:(long long)arg1;
- (id)utcDate;

@end
