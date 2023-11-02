
@interface BSRelativeDateTimerFireInfo : NSObject <NSCopying> {
    long long  _comparedToNow;
    NSDate * _fireDate;
    unsigned long long  _resolution;
    unsigned long long  _value;
}

@property (nonatomic, readonly) long long comparedToNow;
@property (nonatomic, readonly, copy) NSDate *fireDate;
@property (nonatomic, readonly) unsigned long long resolution;
@property (nonatomic, readonly) unsigned long long value;

- (void).cxx_destruct;
- (long long)comparedToNow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fireDate;
- (id)initWithValue:(unsigned long long)arg1 resolution:(unsigned long long)arg2 comparedToNow:(long long)arg3 fireDate:(id)arg4;
- (unsigned long long)resolution;
- (unsigned long long)value;

@end
