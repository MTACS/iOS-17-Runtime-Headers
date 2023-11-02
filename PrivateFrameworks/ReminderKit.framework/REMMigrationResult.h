
@interface REMMigrationResult : NSObject <NSSecureCoding> {
    bool  _isObserver;
    unsigned long long  _listsMigrated;
    NSString * _log;
    unsigned long long  _remindersMigrated;
    NSString * _state;
    double  _timeElapsed;
}

@property (nonatomic, readonly) bool isObserver;
@property (nonatomic, readonly) unsigned long long listsMigrated;
@property (nonatomic, readonly) NSString *log;
@property (nonatomic, readonly) unsigned long long remindersMigrated;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) double timeElapsed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 IsObserver:(bool)arg2 timeElapsed:(double)arg3 listsMigrated:(unsigned long long)arg4 remindersMigrated:(unsigned long long)arg5 log:(id)arg6;
- (bool)isObserver;
- (unsigned long long)listsMigrated;
- (id)log;
- (unsigned long long)remindersMigrated;
- (id)state;
- (double)timeElapsed;

@end
