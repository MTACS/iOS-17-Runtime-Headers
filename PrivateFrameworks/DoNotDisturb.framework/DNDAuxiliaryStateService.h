
@interface DNDAuxiliaryStateService : NSObject {
    NSString * _clientIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1;
- (bool)setScreenIsShared:(bool)arg1 screenIsMirrored:(bool)arg2 error:(id*)arg3;

@end
