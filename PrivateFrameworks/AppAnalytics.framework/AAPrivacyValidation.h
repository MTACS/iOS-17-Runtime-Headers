
@interface AAPrivacyValidation : NSObject {
    void denylistDescriptors;
    void enabled;
}

@property (nonatomic, readonly) NSSet *denylistDescriptors;
@property (nonatomic, readonly) bool enabled;

+ (id)default;

- (void).cxx_destruct;
- (id)denylistDescriptors;
- (bool)enabled;
- (id)init;
- (id)withDenylistDescriptors:(id)arg1;
- (id)withEnabled:(bool)arg1;

@end
