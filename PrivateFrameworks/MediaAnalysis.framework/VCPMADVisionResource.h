
@interface VCPMADVisionResource : VCPMADResource {
    NSObject<OS_dispatch_queue> * _queue;
    VNSession * _session;
}

@property (nonatomic, readonly) VNSession *session;

- (void).cxx_destruct;
- (id)init;
- (void)purge;
- (id)session;

@end
