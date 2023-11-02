
@interface ML3GreenTeaLogger : NSObject {
    NSString * _accessor;
    double  _lastLogTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct ct_green_tea_logger_s { } * _logger;
}

+ (void)logOnceForAccessor:(id)arg1;

- (void).cxx_destruct;
- (void)beginLogAccessInterval;
- (void)dealloc;
- (void)endLogAccessInterval;
- (id)initWithAccessorName:(id)arg1;
- (void)logAccess;

@end
