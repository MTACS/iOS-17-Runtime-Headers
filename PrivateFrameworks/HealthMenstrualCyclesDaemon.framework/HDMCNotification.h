
@interface HDMCNotification : NSObject <NSCopying> {
    NSString * _category;
    long long  _daysShifted;
    long long  _fertileWindowEndDayIndex;
    long long  _fireOnDayIndex;
}

@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, readonly) long long daysShifted;
@property (nonatomic, readonly) long long fertileWindowEndDayIndex;
@property (nonatomic, readonly) long long fireOnDayIndex;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)daysShifted;
- (id)description;
- (id)eventIdentifierFromUpdateFertileWindowNotification;
- (long long)fertileWindowEndDayIndex;
- (long long)fireOnDayIndex;
- (id)initWithFireOnDayIndex:(long long)arg1 category:(id)arg2;
- (id)initWithFireOnDayIndex:(long long)arg1 category:(id)arg2 fertileWindowEndDayIndex:(long long)arg3 daysShifted:(long long)arg4;
- (bool)isEqual:(id)arg1;

@end
