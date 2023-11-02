
@interface TSGPSTime : NSObject <NSCopying> {
    unsigned long long  _nanosecondsSinceEpoch;
}

@property (nonatomic, readonly) unsigned int extendedWeek;
@property (nonatomic, readonly) unsigned long long nanoseconds;
@property (nonatomic, readonly) unsigned long long nanosecondsSinceEpoch;
@property (nonatomic, readonly) double seconds;
@property (nonatomic, readonly) unsigned short week;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)extendedWeek;
- (unsigned long long)hash;
- (id)initWithExtendedWeek:(unsigned int)arg1 nanoseconds:(unsigned long long)arg2;
- (id)initWithExtendedWeek:(unsigned int)arg1 seconds:(double)arg2;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1;
- (id)initWithWeek:(unsigned int)arg1 nanoseconds:(unsigned long long)arg2 rollovers:(unsigned short)arg3;
- (id)initWithWeek:(unsigned int)arg1 seconds:(double)arg2 rollovers:(unsigned short)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)nanoseconds;
- (unsigned long long)nanosecondsSinceEpoch;
- (double)seconds;
- (unsigned short)week;

@end
