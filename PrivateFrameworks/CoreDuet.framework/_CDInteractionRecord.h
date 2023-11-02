
@interface _CDInteractionRecord : NSManagedObject

@property (nonatomic, retain) NSString *account;
@property (nonatomic, retain) NSSet *attachments;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *contentURL;
@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *derivedIntentIdentifier;
@property (nonatomic) long long direction;
@property (nonatomic, retain) NSString *domainIdentifier;
@property (nonatomic) double endDate;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic) bool isResponse;
@property (nonatomic, retain) NSSet *keywords;
@property (nonatomic, retain) NSString *locationUUID;
@property (nonatomic) bool mailShareSheetDeletionCandidate;
@property (nonatomic) long long mechanism;
@property (nonatomic, retain) NSString *nsUserName;
@property (nonatomic) long long recipientCount;
@property (nonatomic, retain) NSSet *recipients;
@property (nonatomic) long long selfParticipantStatus;
@property (nonatomic, retain) _CDContactRecord *sender;
@property (nonatomic) double startDate;
@property (nonatomic, retain) NSString *targetBundleId;
@property (nonatomic) double updateDate;
@property (nonatomic, retain) NSString *uuid;

@end
