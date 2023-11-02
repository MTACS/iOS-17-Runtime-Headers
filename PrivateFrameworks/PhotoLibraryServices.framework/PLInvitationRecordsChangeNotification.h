
@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification {
    bool  _invitationRecordsDidChange;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) PLGenericAlbum *album;
@property (nonatomic, readonly) bool invitationRecordsDidChange;

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2;

- (void).cxx_destruct;
- (void)_calculateDiffs;
- (id)album;
- (bool)invitationRecordsDidChange;
- (id)name;
- (id)userInfo;

@end
