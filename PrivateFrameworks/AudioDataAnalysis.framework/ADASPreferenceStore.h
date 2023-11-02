
@interface ADASPreferenceStore : NSObject {
    NPSDomainAccessor * _coreAudioDeviceDomain;
    NPSDomainAccessor * _coreAudioDomain;
    NSDictionary * _defaultValues;
    NSDictionary * _keyMap;
    NSObject<OS_dispatch_queue> * _npsDomainAccessorQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _npsDomainLock;
    NSDictionary * _specialDarwinKeys;
}

@property (nonatomic, retain) NPSDomainAccessor *coreAudioDeviceDomain;
@property (nonatomic, retain) NPSDomainAccessor *coreAudioDomain;
@property (nonatomic, readonly) NSDictionary *defaultValues;
@property (nonatomic, readonly) NSDictionary *keyMap;
@property (nonatomic, readonly) NSDictionary *specialDarwinKeys;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)coreAudioDeviceDomain;
- (id)coreAudioDomain;
- (id)defaultValues;
- (id)init;
- (void)initNPSDomain;
- (id)keyMap;
- (void)pairedDeviceStateChanged:(id)arg1;
- (void)registerForNotifications;
- (void)setCoreAudioDeviceDomain:(id)arg1;
- (void)setCoreAudioDomain:(id)arg1;
- (id)specialDarwinKeys;

@end
