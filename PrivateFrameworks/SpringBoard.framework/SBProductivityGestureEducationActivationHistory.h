
@interface SBProductivityGestureEducationActivationHistory : NSObject <NSCopying> {
    long long  _count;
    NSDate * _date;
}

@property (nonatomic) long long count;
@property (nonatomic, copy) NSDate *date;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)date;
- (void)setCount:(long long)arg1;
- (void)setDate:(id)arg1;

@end
