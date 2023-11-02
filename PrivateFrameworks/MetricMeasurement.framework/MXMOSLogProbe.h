
@interface MXMOSLogProbe : MXMProbe <OSActivityStreamDelegate> {
    OSActivityStream * _activityStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)connectedDevices;
+ (id)hostDevice;
+ (id)probeHostOSLog;

- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (bool)activityStream:(id)arg1 results:(id)arg2;
- (id)initWithTargetDevice:(id)arg1;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)streamDidStart:(id)arg1;
- (void)streamDidStop:(id)arg1;

@end
