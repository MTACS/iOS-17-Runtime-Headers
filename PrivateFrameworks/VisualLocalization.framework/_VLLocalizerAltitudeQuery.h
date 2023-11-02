
@interface _VLLocalizerAltitudeQuery : NSObject {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CLLocation * _location;
    unsigned long long  _signpostID;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned long long signpostID;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)callbackQueue;
- (id)init;
- (id)initWithLocation:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (id)location;
- (unsigned long long)signpostID;

@end
