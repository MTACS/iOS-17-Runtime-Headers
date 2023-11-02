
@interface PCInterfaceMonitor : NSObject <PCInterfaceMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    NSMapTable * _delegateMap;
    <PCInterfaceUsabilityMonitorProtocol> * _internal;
}

@property (nonatomic, readonly) int currentRAT;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long interface5GMode;
@property (nonatomic, readonly) long long interfaceIdentifier;
@property (nonatomic, readonly) bool isBadLinkQuality;
@property (nonatomic, readonly) bool isInterfaceHistoricallyUsable;
@property (nonatomic, readonly) bool isInterfaceUsable;
@property (nonatomic, readonly) bool isInternetReachable;
@property (nonatomic, readonly) bool isLTEWithCDRX;
@property (nonatomic, readonly) bool isNetworkingPowerExpensiveToUse;
@property (nonatomic, readonly) bool isPoorLinkQuality;
@property (nonatomic, readonly) bool isRadioHot;
@property (nonatomic, readonly) int linkQuality;
@property (nonatomic, readonly, retain) NSString *linkQualityString;
@property (nonatomic, readonly) NSString *networkCode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __CFString { }*wwanInterfaceName;

+ (bool)isBadLinkQuality:(int)arg1;
+ (bool)isNetworkingPowerExpensiveToUse;
+ (bool)isPoorLinkQuality:(int)arg1;
+ (id)sharedInstanceForIdentifier:(long long)arg1;
+ (id)stringForLinkQuality:(int)arg1;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (int)currentRAT;
- (void)dealloc;
- (id)initWithInterfaceIdentifier:(long long)arg1;
- (unsigned long long)interface5GMode;
- (long long)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (bool)isBadLinkQuality;
- (bool)isInterfaceHistoricallyUsable;
- (bool)isInterfaceUsable;
- (bool)isInternetReachable;
- (bool)isLTEWithCDRX;
- (bool)isNetworkingPowerExpensiveToUse;
- (bool)isPoorLinkQuality;
- (bool)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (id)networkCode;
- (void)removeDelegate:(id)arg1;
- (struct __CFString { }*)wwanInterfaceName;

@end
