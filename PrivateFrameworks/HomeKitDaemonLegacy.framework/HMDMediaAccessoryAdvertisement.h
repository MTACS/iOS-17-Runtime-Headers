
@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation> {
    bool  _associated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDMediaOutputDevice * _outputDevice;
}

@property (getter=isAssociated) bool associated;
@property (retain) HMDMediaOutputDevice *outputDevice;

+ (bool)canAirPortExpressSupportMediaAccessory:(id)arg1;

- (void).cxx_destruct;
- (long long)associationOptions;
- (id)description;
- (id)initWithOutputDevice:(id)arg1;
- (bool)isAssociated;
- (bool)matchesWACDeviceID:(id)arg1;
- (id)outputDevice;
- (void)setAssociated:(bool)arg1;
- (void)setOutputDevice:(id)arg1;

@end
