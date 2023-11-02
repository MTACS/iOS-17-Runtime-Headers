
@interface ATAudioTapDescription : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    unsigned int  _audioSessionID;
    NSArray * _excludedPIDs;
    AVAudioFormat * _format;
    NSString * _name;
    bool  _preSpatial;
    NSArray * _processIdentifiers;
    NSString * _sceneIdentifier;
    unsigned int  _sessionType;
    long long  _tapType;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) unsigned int audioSessionID;
@property (nonatomic, copy) NSArray *excludedPIDs;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) NSString *name;
@property (getter=isPreSpatial, nonatomic, readonly) bool preSpatial;
@property (nonatomic) int processIdentifier;
@property (nonatomic, copy) NSArray *processIdentifiers;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, readonly) unsigned int sessionType;
@property (nonatomic, readonly) long long tapType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (unsigned int)audioSessionID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedPIDs;
- (id)format;
- (id)initBaseTapInternalWithFormat:(id)arg1;
- (id)initPreSpatialAudioSessionTapWithFormat:(id)arg1 sessionID:(unsigned int)arg2;
- (id)initPreSpatialProcessTapWithFormat:(id)arg1 PID:(int)arg2;
- (id)initPreSpatialProcessTapWithFormat:(id)arg1 PIDs:(id)arg2;
- (id)initPreSpatialSceneIdentifierTapWithFormat:(id)arg1 sceneIdentifier:(id)arg2;
- (id)initPreSpatialSessionTypeTapWithFormat:(id)arg1 sessionType:(unsigned int)arg2;
- (id)initPreSpatialTapInternalWithFormat:(id)arg1 PIDs:(id)arg2 sessionID:(unsigned int)arg3 sessionType:(unsigned int)arg4 sceneID:(id)arg5;
- (id)initProcessTapWithFormat:(id)arg1 PID:(int)arg2;
- (id)initProcessTapWithFormat:(id)arg1 PIDs:(id)arg2;
- (id)initScreenSharingTapWithFormat:(id)arg1;
- (id)initSystemTapWithFormat:(id)arg1;
- (id)initSystemTapWithFormat:(id)arg1 excludePIDs:(id)arg2;
- (id)initTapInternalWithFormat:(id)arg1 PIDs:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPreSpatial;
- (id)name;
- (int)processIdentifier;
- (id)processIdentifiers;
- (id)sceneIdentifier;
- (unsigned int)sessionType;
- (void)setExcludedPIDs:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setProcessIdentifiers:(id)arg1;
- (bool)setProcessIdentifiersChecked:(id)arg1;
- (long long)tapType;

@end
