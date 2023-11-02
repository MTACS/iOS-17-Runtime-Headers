
@interface _HKCalendarDayCellIconConfiguration : NSObject <NSCopying> {
    UIColor * _color;
    long long  _dateIndex;
    long long  _style;
}

+ (id)configurationWithDateIndex:(long long)arg1 color:(id)arg2 style:(long long)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
