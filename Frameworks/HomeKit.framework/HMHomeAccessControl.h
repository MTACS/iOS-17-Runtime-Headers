
@interface HMHomeAccessControl : HMAccessControl {
    bool  _accessAllowed;
    unsigned long long  _accessNotAllowedReasonCode;
    bool  _administrator;
    bool  _announceAccessAllowed;
    unsigned long long  _audioAnalysisUserDropInAccessLevel;
    HMUserCameraAccess * _camerasAccess;
    bool  _owner;
    HMUserPresenceAuthorization * _presenceAuthStatus;
    HMUserPresenceCompute * _presenceComputeStatus;
    bool  _remoteAccessAllowed;
}

@property (getter=isAccessAllowed) bool accessAllowed;
@property (nonatomic) unsigned long long accessNotAllowedReasonCode;
@property (getter=isAdministrator, nonatomic) bool administrator;
@property (getter=isAnnounceAccessAllowed) bool announceAccessAllowed;
@property (nonatomic) unsigned long long audioAnalysisUserDropInAccessLevel;
@property (nonatomic, retain) HMUserCameraAccess *camerasAccess;
@property (getter=isOwner) bool owner;
@property (nonatomic, retain) HMUserPresenceAuthorization *presenceAuthStatus;
@property (nonatomic, retain) HMUserPresenceCompute *presenceComputeStatus;
@property (getter=isRemoteAccessAllowed) bool remoteAccessAllowed;

- (void).cxx_destruct;
- (unsigned long long)accessNotAllowedReasonCode;
- (unsigned long long)audioAnalysisUserDropInAccessLevel;
- (id)camerasAccess;
- (unsigned long long)camerasAccessLevel;
- (id)initWithUser:(id)arg1 allowAccess:(bool)arg2 owner:(bool)arg3 administratorPrivilege:(bool)arg4 remoteAccess:(bool)arg5 presenceAuthStatus:(id)arg6 presenceComputeStatus:(id)arg7 announceAccess:(bool)arg8 camerasAccess:(id)arg9 audioAnalysisUserDropInAccessLevel:(unsigned long long)arg10;
- (bool)isAccessAllowed;
- (bool)isAdministrator;
- (bool)isAnnounceAccessAllowed;
- (bool)isEqual:(id)arg1;
- (bool)isOwner;
- (bool)isRemoteAccessAllowed;
- (id)presenceAuthStatus;
- (unsigned long long)presenceAuthorizationStatus;
- (unsigned long long)presenceComputationStatus;
- (id)presenceComputeStatus;
- (void)setAccessAllowed:(bool)arg1;
- (void)setAccessNotAllowedReasonCode:(unsigned long long)arg1;
- (void)setAdministrator:(bool)arg1;
- (void)setAnnounceAccessAllowed:(bool)arg1;
- (void)setAudioAnalysisUserDropInAccessLevel:(unsigned long long)arg1;
- (void)setAudioAnalysisUserDropinAccessLevel:(unsigned long long)arg1;
- (void)setCamerasAccess:(id)arg1;
- (void)setOwner:(bool)arg1;
- (void)setPresenceAuthStatus:(id)arg1;
- (void)setPresenceComputeStatus:(id)arg1;
- (void)setRemoteAccessAllowed:(bool)arg1;
- (void)updateAdministratorAccess:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAnnounceAccess:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAudioAnalysisUserDropinAccessLevel:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateCamerasAccessLevel:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRemoteAccess:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
