
@interface CTTelephonyNetworkInfoDelegatePlus : NSObject <CoreTelephonyClientDataDelegateInternal> {
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _clientQueue;
    CTTelephonyNetworkInfo * _delegate;
}

@property (nonatomic) struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; } clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CTTelephonyNetworkInfo *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })clientQueue;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setClientQueue:(struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })arg1;
- (void)setDelegate:(id)arg1;

@end
