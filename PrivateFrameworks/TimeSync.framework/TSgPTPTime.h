
@interface TSgPTPTime : NSObject <NSCopying> {
    bool  _frequencyTraceable;
    unsigned long long  _grandmasterIdentity;
    unsigned short  _localPortNumber;
    unsigned long long  _nanosecondsSinceEpoch;
    bool  _ptpTimescale;
    bool  _timeTraceable;
}

@property (getter=isFrequencyTraceable, nonatomic, readonly) bool frequencyTraceable;
@property (nonatomic, readonly) unsigned long long grandmasterIdentity;
@property (nonatomic, readonly) unsigned short localPortNumber;
@property (nonatomic, readonly) unsigned int nanoseconds;
@property (nonatomic, readonly) unsigned long long nanosecondsSinceEpoch;
@property (getter=isPTPTimescale, nonatomic, readonly) bool ptpTimescale;
@property (nonatomic, readonly) unsigned long long seconds;
@property (getter=isTimeTraceable, nonatomic, readonly) bool timeTraceable;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)grandmasterIdentity;
- (unsigned long long)hash;
- (id)init;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1 onGrandmaster:(unsigned long long)arg2 withLocalPortNumber:(unsigned short)arg3 ptpTimescale:(bool)arg4 timeTraceable:(bool)arg5 frequencyTraceable:(bool)arg6;
- (id)initWithSeconds:(unsigned long long)arg1 nanoseconds:(unsigned int)arg2 onGrandmaster:(unsigned long long)arg3 withLocalPortNumber:(unsigned short)arg4 ptpTimescale:(bool)arg5 timeTraceable:(bool)arg6 frequencyTraceable:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isFrequencyTraceable;
- (bool)isPTPTimescale;
- (bool)isTimeTraceable;
- (unsigned short)localPortNumber;
- (unsigned int)nanoseconds;
- (unsigned long long)nanosecondsSinceEpoch;
- (unsigned long long)seconds;

@end
