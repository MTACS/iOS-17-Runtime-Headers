
@interface WFScanPerformanceEvent : NSObject <WFUIEvent> {
    NSDictionary * _eventDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_scanReasonToString:(unsigned long long)arg1;
- (id)eventDictionary;
- (id)eventName;
- (id)initWithScanReason:(unsigned long long)arg1 timeElasped:(unsigned long long)arg2 firstScan:(bool)arg3 results:(unsigned long long)arg4 errorCode:(long long)arg5 lowPriority:(bool)arg6 rssiFilter:(bool)arg7;

@end
