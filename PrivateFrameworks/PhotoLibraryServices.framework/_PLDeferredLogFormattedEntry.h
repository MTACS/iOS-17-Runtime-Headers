
@interface _PLDeferredLogFormattedEntry : NSObject {
    long long  _context;
    NSDate * _date;
    NSString * _entityDescription;
    NSString * _logType;
    unsigned long long  _objectPointer;
}

@property (nonatomic) long long context;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *entityDescription;
@property (nonatomic, retain) NSString *logType;
@property (nonatomic) unsigned long long objectPointer;

- (void).cxx_destruct;
- (long long)context;
- (id)date;
- (id)entityDescription;
- (id)logType;
- (unsigned long long)objectPointer;
- (void)setContext:(long long)arg1;
- (void)setDate:(id)arg1;
- (void)setEntityDescription:(id)arg1;
- (void)setLogType:(id)arg1;
- (void)setObjectPointer:(unsigned long long)arg1;

@end
