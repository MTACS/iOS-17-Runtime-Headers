
@interface MRUHardwareVolumeController : NSObject {
    NSHashTable * _assertions;
    NSArray * _invalidators;
}

@property (nonatomic, retain) NSHashTable *assertions;
@property (nonatomic, retain) NSArray *invalidators;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)assertions;
- (id)init;
- (id)invalidators;
- (void)relinquishHardwareVolumeButtons;
- (id)requestControlsForVolumeDataSource:(id)arg1 reason:(id)arg2;
- (void)setAssertions:(id)arg1;
- (void)setInvalidators:(id)arg1;
- (void)unregisterAssertion:(id)arg1;
- (void)updateControlsForAssertion:(id)arg1;

@end
