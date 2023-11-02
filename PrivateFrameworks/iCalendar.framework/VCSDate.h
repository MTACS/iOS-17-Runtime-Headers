
@interface VCSDate : NSObject <NSCopying> {
    NSDateComponents * _components;
    bool  _dateOnly;
    bool  _floating;
}

@property (nonatomic, readonly, copy) NSDateComponents *components;
@property (nonatomic, readonly) bool dateOnly;
@property (nonatomic, readonly) bool floating;

+ (id)dateListFromData:(id)arg1;

- (void).cxx_destruct;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingDays:(long long)arg1;
- (id)dateForEndOfDay;
- (bool)dateOnly;
- (id)dateWithTimeComponentsFromDate:(id)arg1;
- (id)description;
- (bool)floating;
- (id)initWithDateComponents:(id)arg1 floating:(bool)arg2 dateOnly:(bool)arg3;
- (id)initWithDateString:(const char *)arg1;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 floating:(bool)arg7 dateOnly:(bool)arg8;
- (bool)isEqual:(id)arg1;
- (id)nsDateWithLocalTimeZone:(id)arg1;

@end
