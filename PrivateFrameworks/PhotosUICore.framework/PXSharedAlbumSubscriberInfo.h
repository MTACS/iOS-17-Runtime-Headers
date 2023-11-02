
@interface PXSharedAlbumSubscriberInfo : NSObject {
    NSString * _displayName;
    NSString * _email;
    NSString * _firstName;
    NSString * _identifier;
    PLCloudSharedAlbumInvitationRecord * _invitationRecord;
    bool  _isOwner;
    NSString * _lastName;
    NSString * _phone;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, retain) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (nonatomic, readonly) bool isOwner;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *phone;

+ (id)_allSubscribersForAlbum:(id)arg1 includeMyself:(bool)arg2;
+ (id)allSubscribersForAlbum:(id)arg1;
+ (id)allSubscribersForAlbumWithObjectID:(id)arg1 includingCurrentUser:(bool)arg2 managedObjectContext:(id)arg3;

- (void).cxx_destruct;
- (id)displayName;
- (id)email;
- (id)firstName;
- (id)identifier;
- (id)init;
- (id)initWithInvitationRecord:(id)arg1 identifier:(id)arg2 email:(id)arg3 phone:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 displayName:(id)arg7 isOwner:(bool)arg8;
- (id)invitationRecord;
- (bool)isOwner;
- (id)lastName;
- (id)matchingContactWithKeysToFetch:(id)arg1 outMatchingKey:(id*)arg2 outMatchingIdentifier:(id*)arg3;
- (id)phone;

@end
