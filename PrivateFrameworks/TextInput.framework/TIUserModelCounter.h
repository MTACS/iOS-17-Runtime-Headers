
@interface TIUserModelCounter : NSObject {
    NSDate * _creationDate;
    unsigned long long  _current;
    NSDate * _lastUpdateDate;
    NSString * _name;
    unsigned long long  _persisted;
    bool  _wasReset;
}

@property (nonatomic, readonly) NSNumber *count;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSDate *lastUpdateDate;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (void)add:(int)arg1;
- (id)count;
- (id)creationDate;
- (void)doPersist:(id)arg1 forDate:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 initialCount:(id)arg2 creationDate:(id)arg3 lastUpdateDate:(id)arg4;
- (id)lastUpdateDate;
- (id)name;
- (void)reset;

@end
