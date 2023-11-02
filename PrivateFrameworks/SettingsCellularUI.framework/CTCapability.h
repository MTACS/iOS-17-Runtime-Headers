
@interface CTCapability : NSObject {
    NSMutableDictionary * _capability;
    bool  _capabilityFetched;
    NSMutableDictionary * _capabilityInfo;
    NSString * _capabilityName;
    NSMutableDictionary * _enabledDict;
    bool  _enabledFetched;
}

@property (retain) NSMutableDictionary *capability;
@property bool capabilityFetched;
@property (retain) NSMutableDictionary *capabilityInfo;
@property (nonatomic, retain) NSString *capabilityName;
@property (retain) NSMutableDictionary *enabledDict;
@property bool enabledFetched;

- (void).cxx_destruct;
- (id)capability;
- (bool)capabilityFetched;
- (id)capabilityInfo;
- (id)capabilityName;
- (id)enabledDict;
- (bool)enabledFetched;
- (bool)getCapabilityForSlotID:(long long)arg1;
- (bool)getCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;
- (bool)getEnabledForSlotID:(long long)arg1;
- (id)initWithCapabilityName:(id)arg1;
- (void)reset;
- (void)setCapability:(id)arg1;
- (void)setCapabilityFetched:(bool)arg1;
- (void)setCapabilityInfo:(id)arg1;
- (void)setCapabilityInfo:(id)arg1 forSlotID:(long long)arg2;
- (void)setCapabilityName:(id)arg1;
- (void)setCapable:(bool)arg1 forSlotID:(long long)arg2;
- (void)setEnabled:(bool)arg1 forSlotID:(long long)arg2;
- (void)setEnabledDict:(id)arg1;
- (void)setEnabledFetched:(bool)arg1;
- (id)slotNum:(long long)arg1;

@end
