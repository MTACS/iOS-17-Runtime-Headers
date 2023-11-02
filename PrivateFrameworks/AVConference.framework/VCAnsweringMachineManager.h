
@interface VCAnsweringMachineManager : VCXPCManager <VCAnsweringMachineDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableArray * _instances;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerAnsweringMachineInitialize;
+ (void)registerAnsweringMachineStart;
+ (void)registerAnsweringMachineStop;
+ (void)registerAnsweringMachineTerminate;
+ (void)registerBlocksForService;
+ (id)sharedInstance;

- (void)answeringMachine:(id)arg1 didFinishAnnouncement:(bool)arg2 error:(id)arg3;
- (void)answeringMachine:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)answeringMachine:(id)arg1 didStop:(bool)arg2 recordingURL:(id)arg3 error:(id)arg4;
- (void)dealloc;
- (id)init;

@end
