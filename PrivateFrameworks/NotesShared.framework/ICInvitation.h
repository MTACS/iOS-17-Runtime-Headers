
@interface ICInvitation : NSManagedObject {
    CKShare * _serverShare;
}

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, readonly, copy) NSString *contentDescription;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, readonly) bool hasThumbnail;
@property (nonatomic, readonly) SWHighlight *highlight;
@property (nonatomic, readonly, copy) NSString *joinActionTitle;
@property (nonatomic, readonly, copy) NSString *joinDescription;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic) long long noteCount;
@property (nonatomic) long long noteCountRecursive;
@property (nonatomic, readonly, copy) NSString *participantsInfoDescription;
@property (nonatomic, copy) NSDate *receivedDate;
@property (nonatomic, readonly, copy) NSString *removeActionTitle;
@property (nonatomic, retain) ICCloudSyncingObject *rootObject;
@property (nonatomic, copy) NSString *rootObjectType;
@property (nonatomic, retain) CKShare *serverShare;
@property (nonatomic, copy) NSData *serverShareData;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic, copy) NSString *snippet;
@property (nonatomic) long long snippetAttachmentCount;
@property (nonatomic) short snippetAttachmentType;
@property (nonatomic) long long subfolderCount;
@property (nonatomic) long long subfolderCountRecursive;
@property (nonatomic, copy) NSData *thumbnailDataDark;
@property (nonatomic, copy) NSData *thumbnailDataLight;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *typeDescription;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)allInvitationsInContext:(id)arg1;
+ (id)invitationWithShareURL:(id)arg1 context:(id)arg2;
+ (id)invitationsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)makeInvitationIfNeededWithShareURL:(id)arg1 account:(id)arg2 context:(id)arg3;
+ (id)makeInvitationWithShareURL:(id)arg1 account:(id)arg2 context:(id)arg3;
+ (id)predicateForPendingInvitationsInAccount:(id)arg1;
+ (id)predicateForPendingInvitationsInAccount:(id)arg1 receivedSince:(id)arg2;
+ (id)shareSystemFieldsTransformer;

- (void).cxx_destruct;
- (id)serverShare;
- (void)setServerShare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)highlight;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)contentDescription;
- (bool)hasThumbnail;
- (id)joinActionTitle;
- (id)joinDescription;
- (id)participantsInfoDescription;
- (id)removeActionTitle;
- (id)thumbnailImageForAppearance:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)typeDescription;
- (void)updateFromShare:(id)arg1;

@end
