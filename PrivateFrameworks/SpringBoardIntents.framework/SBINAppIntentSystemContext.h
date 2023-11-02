
@interface SBINAppIntentSystemContext : NSObject <BSDescriptionStreamable> {
    unsigned long long  _actionSource;
    NSDate * _preciseTimestamp;
}

@property (nonatomic, readonly) unsigned long long actionSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *preciseTimestamp;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)actionSource;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPreciseTimestamp:(id)arg1 actionSource:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)preciseTimestamp;

@end
