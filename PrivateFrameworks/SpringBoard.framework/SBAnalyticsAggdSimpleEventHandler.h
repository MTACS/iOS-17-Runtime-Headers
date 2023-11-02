
@interface SBAnalyticsAggdSimpleEventHandler : NSObject <SBFAnalyticsBackendEventHandling> {
    id /* block */  _emitBlock;
    unsigned long long  _eventType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)latchForEvent:(unsigned long long)arg1 aggdKey:(id)arg2;
+ (id)monotonicallyIncreasingForEvent:(unsigned long long)arg1 aggdKey:(id)arg2;
+ (id)setScalarForEvent:(unsigned long long)arg1 aggdKey:(id)arg2 valueBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)initWithEvent:(unsigned long long)arg1 emitBlock:(id /* block */)arg2;

@end
