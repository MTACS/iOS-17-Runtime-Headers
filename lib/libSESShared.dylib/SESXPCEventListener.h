
@interface SESXPCEventListener : NSObject {
    NSMutableDictionary * pendingEvents;
    NSObject<OS_dispatch_queue> * queue;
    NSMutableDictionary * registeredDelegates;
}

+ (void)kickoff;
+ (id)registerOnStream:(id)arg1 forEvent:(id)arg2 handler:(id)arg3;
+ (id)sharedObject;

- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)_dumpState;
- (void)_handleEvent:(id)arg1 payload:(id)arg2;
- (id)init;

@end
