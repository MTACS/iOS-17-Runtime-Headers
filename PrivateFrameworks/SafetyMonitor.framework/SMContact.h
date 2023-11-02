
@interface SMContact : NSObject {
    NSData * _allowReadToken;
    NSUUID * _identifier;
    NSString * _participantID;
    NSData * _safetyCacheKey;
    NSUUID * _sessionUUID;
    NSURL * _shareURL;
    NSData * _sharingInvitationData;
    NSDate * _syncDate;
}

@property (nonatomic, copy) NSData *allowReadToken;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic, copy) NSData *safetyCacheKey;
@property (nonatomic, copy) NSUUID *sessionUUID;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic, copy) NSData *sharingInvitationData;
@property (nonatomic, copy) NSDate *syncDate;

- (void).cxx_destruct;
- (id)allowReadToken;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 sessionID:(id)arg2 allowReadToken:(id)arg3 safetyCacheKey:(id)arg4 syncDate:(id)arg5 sharingInvitationData:(id)arg6 shareURL:(id)arg7 participantID:(id)arg8;
- (id)participantID;
- (id)safetyCacheKey;
- (id)sessionUUID;
- (void)setAllowReadToken:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setSafetyCacheKey:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setSharingInvitationData:(id)arg1;
- (void)setSyncDate:(id)arg1;
- (id)shareURL;
- (id)sharingInvitationData;
- (id)syncDate;

@end
