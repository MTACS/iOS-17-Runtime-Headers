
@interface CKDetailsContactsViewModel : NSObject {
    long long  _callType;
    CNContact * _contact;
    CKEntity * _entity;
    NSString * _entityName;
    bool  _isPendingRecipient;
    bool  _isSatellite;
    NSString * _locationString;
    NSString * _preferredHandle;
    bool  _showsFaceTimeVideoButton;
    bool  _showsLocation;
    bool  _showsMessageButton;
    bool  _showsPhoneButton;
    bool  _showsScreenSharingButton;
    bool  _showsTUConversationStatus;
    bool  _tuConversationStatusIsActive;
    bool  _verified;
}

@property (nonatomic) long long callType;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CKEntity *entity;
@property (nonatomic, copy) NSString *entityName;
@property (nonatomic) bool isPendingRecipient;
@property (nonatomic) bool isSatellite;
@property (nonatomic, copy) NSString *locationString;
@property (nonatomic, copy) NSString *preferredHandle;
@property (nonatomic) bool showsFaceTimeVideoButton;
@property (nonatomic) bool showsLocation;
@property (nonatomic) bool showsMessageButton;
@property (nonatomic) bool showsPhoneButton;
@property (nonatomic) bool showsScreenSharingButton;
@property (nonatomic) bool showsTUConversationStatus;
@property (nonatomic) bool tuConversationStatusIsActive;
@property (nonatomic) bool verified;

+ (id)descriptorForContactRequiredKeys;

- (void).cxx_destruct;
- (long long)callType;
- (id)contact;
- (id)entity;
- (id)entityName;
- (id)initWithEntity:(id)arg1 locationString:(id)arg2 tuConversationStatusIsActive:(bool)arg3 callType:(long long)arg4 showsLocation:(bool)arg5 showsMessageButton:(bool)arg6 showsFaceTimeVideoButton:(bool)arg7 showsPhoneButton:(bool)arg8 showsScreenSharingButton:(bool)arg9 contact:(id)arg10 isPendingRecipient:(bool)arg11 verified:(bool)arg12 isSatellite:(bool)arg13 showsTUConversationStatus:(bool)arg14;
- (bool)isPendingRecipient;
- (bool)isSatellite;
- (id)locationString;
- (id)preferredHandle;
- (void)setCallType:(long long)arg1;
- (void)setContact:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setIsPendingRecipient:(bool)arg1;
- (void)setIsSatellite:(bool)arg1;
- (void)setLocationString:(id)arg1;
- (void)setPreferredHandle:(id)arg1;
- (void)setShowsFaceTimeVideoButton:(bool)arg1;
- (void)setShowsLocation:(bool)arg1;
- (void)setShowsMessageButton:(bool)arg1;
- (void)setShowsPhoneButton:(bool)arg1;
- (void)setShowsScreenSharingButton:(bool)arg1;
- (void)setShowsTUConversationStatus:(bool)arg1;
- (void)setTuConversationStatusIsActive:(bool)arg1;
- (void)setVerified:(bool)arg1;
- (bool)showsFaceTimeVideoButton;
- (bool)showsLocation;
- (bool)showsMessageButton;
- (bool)showsPhoneButton;
- (bool)showsScreenSharingButton;
- (bool)showsTUConversationStatus;
- (bool)tuConversationStatusIsActive;
- (bool)verified;

@end
