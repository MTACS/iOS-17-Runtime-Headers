
@interface WFScanSessionEvent : NSObject <WFUIEvent> {
    NSDictionary * _eventDictionary;
    NSString * eventName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)scanSessionEventWithSectionCounts:(id)arg1 duration:(double)arg2;

- (void).cxx_destruct;
- (unsigned long long)_durationBucketFromTimeInterval:(double)arg1;
- (id)_sectionCountsToJSONString:(id)arg1;
- (id)eventDictionary;
- (id)eventName;
- (id)initWithScanSectionCounts:(id)arg1 duration:(double)arg2;

@end
