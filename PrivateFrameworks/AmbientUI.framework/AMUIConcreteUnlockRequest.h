
@interface AMUIConcreteUnlockRequest : NSObject <AMUnlockRequest> {
    NSString * name;
    NSString * unlockDestination;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *unlockDestination;

- (void).cxx_destruct;
- (id)name;
- (void)setName:(id)arg1;
- (void)setUnlockDestination:(id)arg1;
- (id)unlockDestination;

@end
