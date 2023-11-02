
@interface IRReplayEventDescriptor : NSObject {
    NSString * _contextChangeReason;
    NSDate * _date;
    IRSystemStateDO * _systemState;
}

@property (nonatomic, readonly) NSString *contextChangeReason;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) IRSystemStateDO *systemState;

- (void).cxx_destruct;
- (id)contextChangeReason;
- (id)date;
- (id)initWithDate:(id)arg1 withContextChangeReason:(id)arg2 withSystemState:(id)arg3;
- (id)systemState;

@end
