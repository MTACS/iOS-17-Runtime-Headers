
@interface FLTelemetryAnalyticsController : NSObject <FLTelemetryController>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_captureItem:(id)arg1 event:(id)arg2 source:(id)arg3;
- (void)captureActionForItem:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (void)captureCurrentState:(id)arg1;
- (void)captureItemAddition:(id)arg1;
- (void)captureItemRemoval:(id)arg1;
- (void)captureItemView:(id)arg1;

@end
