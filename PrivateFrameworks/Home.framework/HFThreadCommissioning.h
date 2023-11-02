
@interface HFThreadCommissioning : NSObject {
    <HMFCancellable> * _cancellationToken;
    HMHome * _home;
    NSString * _setupCode;
    NSNumber * _threadIdentifier;
}

@property (nonatomic, retain) <HMFCancellable> *cancellationToken;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSString *setupCode;
@property (nonatomic, readonly) NSNumber *threadIdentifier;

- (void).cxx_destruct;
- (id)cancellationToken;
- (id)home;
- (id)initWithSetupCode:(id)arg1 threadIdentifier:(id)arg2 home:(id)arg3;
- (void)setCancellationToken:(id)arg1;
- (id)setupCode;
- (id)start;
- (id)threadIdentifier;

@end
