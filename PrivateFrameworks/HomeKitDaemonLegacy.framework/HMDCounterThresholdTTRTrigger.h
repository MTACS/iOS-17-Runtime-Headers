
@interface HMDCounterThresholdTTRTrigger : NSObject <HMMCounterObserver> {
    long long  _activeThreshold;
    NSString * _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _message;
    <HMDRadarInitiating> * _radarInitiator;
    NSString * _radarTitle;
    long long  _targetThreshold;
}

@property (nonatomic, readonly) long long activeThreshold;
@property (nonatomic, readonly) NSString *componentID;
@property (nonatomic, readonly) NSString *componentName;
@property (nonatomic, readonly) NSString *componentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) <HMDRadarInitiating> *radarInitiator;
@property (nonatomic, readonly) NSString *radarTitle;
@property (readonly) Class superclass;
@property (nonatomic) long long targetThreshold;

- (void).cxx_destruct;
- (long long)activeThreshold;
- (id)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)initWithThreshold:(long long)arg1 message:(id)arg2 radarTitle:(id)arg3 componentName:(id)arg4 componentVersion:(id)arg5 componentID:(id)arg6 radarInitiator:(id)arg7;
- (id)initWithThreshold:(long long)arg1 ttrCategory:(id)arg2 radarInitiator:(id)arg3;
- (id)message;
- (id)radarInitiator;
- (id)radarTitle;
- (void)setTargetThreshold:(long long)arg1;
- (long long)targetThreshold;
- (void)updatedCounter:(id)arg1 fromOldValue:(long long)arg2 toNewValue:(long long)arg3;

@end
