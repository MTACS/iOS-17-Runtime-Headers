
@interface ARPRoutingEvent : NSObject {
    NSString * _bundleID;
    NSDateInterval * _interval;
    NSString * _outputDeviceID;
    NSDictionary * _probabilityVector;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSDateInterval *interval;
@property (nonatomic, readonly, copy) NSString *outputDeviceID;
@property (nonatomic, readonly) NSDictionary *probabilityVector;

+ (id)mostRecentRoutingEventInDateInterval:(id)arg1 knowledgeStore:(id)arg2 eventLimit:(unsigned long long)arg3 longFormVideoFilter:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (id)initWithBundleID:(id)arg1 outputDeviceID:(id)arg2 interval:(id)arg3 probabilityVector:(id)arg4;
- (id)interval;
- (id)outputDeviceID;
- (id)probabilityVector;

@end