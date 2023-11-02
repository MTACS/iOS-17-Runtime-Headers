
@interface HMDCameraSessionID : HMFObject <NSCopying> {
    NSString * _description;
    NSMutableDictionary * _deviceMilestones;
    NSString * _deviceSectionName;
    NSString * _hostProcessBundleIdentifier;
    NSMutableDictionary * _milestones;
    NSString * _sessionID;
    bool  _spiClient;
}

@property (readonly) NSMutableDictionary *deviceMilestones;
@property (readonly) NSString *deviceSectionName;
@property (readonly, copy) NSString *hostProcessBundleIdentifier;
@property (readonly) NSMutableDictionary *milestones;
@property (readonly) NSString *sessionID;
@property (getter=isSPIClient, readonly) bool spiClient;

+ (id)hostProcessBundleIdentifierForMessage:(id)arg1;
+ (id)millisecondsSince1970;

- (void).cxx_destruct;
- (void)addParameterFor:(id)arg1 value:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceMilestones;
- (id)deviceSectionName;
- (unsigned long long)hash;
- (id)hostProcessBundleIdentifier;
- (id)initWithSessionID:(id)arg1 hostProcessBundleIdentifier:(id)arg2 isSPIClient:(bool)arg3 deviceSectionName:(id)arg4 description:(id)arg5;
- (id)initWithSessionID:(id)arg1 message:(id)arg2 description:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isSPIClient;
- (void)markMilestoneFor:(id)arg1;
- (void)markMilestoneForPath:(id)arg1;
- (id)milestones;
- (id)sessionID;
- (void)setParameterFor:(id)arg1 value:(id)arg2;
- (void)setParameterForPath:(id)arg1 value:(id)arg2;

@end
