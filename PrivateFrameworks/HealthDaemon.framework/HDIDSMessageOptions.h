
@interface HDIDSMessageOptions : NSObject <NSCopying> {
    unsigned long long  _priority;
    double  _timeoutInterval;
}

@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) double timeoutInterval;

+ (double)HDIDSMessageOptionsMaxMessageTimeout;
+ (id)defaultOptionsWithPriority:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithPriority:(unsigned long long)arg1 timeoutInterval:(double)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)priority;
- (double)timeoutInterval;

@end
