
@interface BWLimitedGMErrorLogger : NSObject {
    int  _currentLoggingCount;
    int  _maxLoggingCount;
    NSString * _name;
}

@property (nonatomic, readonly) int currentLoggingCount;
@property (nonatomic, readonly) int maxLoggingCount;
@property (nonatomic, readonly) NSString *name;

- (int)currentLoggingCount;
- (void)dealloc;
- (id)initWithName:(id)arg1 maxLoggingCount:(int)arg2;
- (void)logErrorNumber:(int)arg1 errorString:(id)arg2;
- (int)maxLoggingCount;
- (id)name;
- (void)resetCurrentLoggingCounter;

@end
