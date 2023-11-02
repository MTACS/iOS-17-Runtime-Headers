
@interface TIStatisticKey : NSObject {
    NSString * _aggdName;
    NSString * _counterName;
    NSString * _inputMode;
}

@property (nonatomic, readonly) NSString *aggdName;
@property (nonatomic, readonly) NSString *counterName;
@property (nonatomic, readonly) NSString *inputMode;

+ (id)statisticKeyWithAggdName:(id)arg1 andCounterName:(id)arg2 andInputMode:(id)arg3;

- (void).cxx_destruct;
- (id)aggdName;
- (id)counterName;
- (id)initWithAggdName:(id)arg1 andCounterName:(id)arg2 andInputMode:(id)arg3;
- (id)inputMode;

@end
