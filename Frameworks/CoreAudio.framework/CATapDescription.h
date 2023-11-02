
@interface CATapDescription : NSObject {
    NSUUID * _UUID;
    NSString * _deviceUID;
    bool  _exclusive;
    bool  _mixdown;
    bool  _mono;
    long long  _muteBehavior;
    NSString * _name;
    bool  _privateTap;
    NSArray * _processes;
    NSNumber * _stream;
}

@property (copy) NSUUID *UUID;
@property (copy) NSString *deviceUID;
@property (getter=isExclusive) bool exclusive;
@property (getter=isMixdown) bool mixdown;
@property (getter=isMono) bool mono;
@property (getter=isMuted) long long muteBehavior;
@property (copy) NSString *name;
@property (getter=isPrivate, setter=setPrivate:) bool privateTap;
@property (copy) NSArray *processes;
@property (copy) NSNumber *stream;

- (void).cxx_destruct;
- (id)UUID;
- (id)deviceUID;
- (id)init;
- (id)initMonoGlobalTapButExcludeProcesses:(id)arg1;
- (id)initMonoMixdownOfProcesses:(id)arg1;
- (id)initMonoMixdownOfProcessesIDs:(id)arg1;
- (id)initStereoGlobalTapButExcludeProcesses:(id)arg1;
- (id)initStereoMixdownOfProcesses:(id)arg1;
- (id)initStereoMixdownOfProcessesIDs:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProcesses:(id)arg1 andDeviceUID:(id)arg2 withStream:(long long)arg3;
- (bool)isExclusive;
- (bool)isMixdown;
- (bool)isMono;
- (long long)isMuted;
- (bool)isPrivate;
- (id)name;
- (id)processes;
- (void)setDeviceUID:(id)arg1;
- (void)setExclusive:(bool)arg1;
- (void)setIsExclusive:(bool)arg1;
- (void)setMixdown:(bool)arg1;
- (void)setMono:(bool)arg1;
- (void)setMuteBehavior:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPrivate:(bool)arg1;
- (void)setProcesses:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)stream;

@end
