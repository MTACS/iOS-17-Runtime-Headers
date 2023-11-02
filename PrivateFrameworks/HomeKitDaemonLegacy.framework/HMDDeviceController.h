
@interface HMDDeviceController : HMFObject <HMFLogging> {
    <HMDDeviceControllerDelegate> * _delegate;
    HMDDevice * _device;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDDeviceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) Class superclass;

+ (id)deviceControllerForCurrentDevice;
+ (id)deviceControllerForDevice:(id)arg1;
+ (id)deviceControllerForDevice:(id)arg1 accountRegistry:(id)arg2;
+ (id)logCategory;
+ (id)placeholderDeviceControllerWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)delegate;
- (id)device;
- (id)identifier;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;
- (id)logIdentifier;
- (void)setDelegate:(id)arg1;
- (void)updateWithDevice:(id)arg1 completionHandler:(id /* block */)arg2;

@end
