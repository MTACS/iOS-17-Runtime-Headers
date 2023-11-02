
@interface HFCameraAnalyticsEventHandler : NSObject

+ (id)decoratedPayloadFor:(id)arg1;
+ (id)sendAssociatedAccessoriesDidLaunchEventWithCount:(id)arg1;
+ (id)sendAssociatedAccessoriesDidModifyListEventWithPayload:(id)arg1;
+ (id)sendCameraClipPlayerDidUpdateEventWithError:(id)arg1;
+ (id)sendDonationEventWithCameraClipCount:(unsigned long long)arg1 processName:(id)arg2 error:(id)arg3;
+ (void)sendEventNamed:(id)arg1 payload:(id)arg2;

@end
