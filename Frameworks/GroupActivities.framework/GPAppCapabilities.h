
@interface GPAppCapabilities : NSObject {
    void $__lazy_storage_$_managedConfigurationObserver;
    void $__lazy_storage_$_supportsSharePlay;
    void $__lazy_storage_$_supportsStartFromApp;
    void task;
}

@property (nonatomic) bool supportsSharePlay;
@property (nonatomic) bool supportsStartFromApp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setSupportsSharePlay:(bool)arg1;
- (void)setSupportsStartFromApp:(bool)arg1;
- (bool)supportsSharePlay;
- (bool)supportsStartFromApp;

@end
