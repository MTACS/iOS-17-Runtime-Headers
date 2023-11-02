
@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying> {
    EKCalendarItem * _owner;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSString *comment;
@property (nonatomic, readonly) NSPredicate *contactPredicate;
@property (getter=isCurrentUser, nonatomic, readonly) bool currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *inviterNameString;
@property (nonatomic, readonly) bool isCurrentUserForScheduling;
@property (nonatomic, readonly) bool isCurrentUserForSharing;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool needsResponse;
@property (nonatomic, readonly) EKCalendarItem *owner;
@property (nonatomic, readonly) long long participantRole;
@property (nonatomic, readonly) long long participantStatus;
@property (nonatomic, readonly) long long participantType;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic) bool scheduleForceSend;
@property (nonatomic, readonly) int scheduleStatus;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (bool)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5;
+ (bool)doesParticipantURLString:(id)arg1 email:(id)arg2 andPhoneNumber:(id)arg3 matchParticipantURLString:(id)arg4 email:(id)arg5 andPhoneNumber:(id)arg6;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipWeakKeys;
+ (id)knownSingleValueKeysForComparison;
+ (bool)needsResponseForParticipantStatus:(long long)arg1;
+ (id)participantWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
+ (id)participantWithName:(id)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (void*)ABRecordWithAddressBook:(void*)arg1;
- (id)URL;
- (id)URLString;
- (id)UUID;
- (id)comment;
- (id)contactPredicate;
- (id)description;
- (id)displayName;
- (id)displayNameRaw;
- (id)displayString;
- (id)emailAddress;
- (id)existingContact;
- (id)firstName;
- (id)generateSemanticIdentifier;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
- (id)inviterNameString;
- (bool)isCurrentUser;
- (bool)isCurrentUserForScheduling;
- (bool)isCurrentUserForSharing;
- (bool)isEqualToParticipant:(id)arg1;
- (bool)isLocationRoom;
- (id)lastName;
- (id)name;
- (id)nameComponents;
- (id)nameUsingAddressAsBackup;
- (bool)needsResponse;
- (id)newContact;
- (id)owner;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)participantType;
- (id)phoneNumber;
- (bool)scheduleForceSend;
- (int)scheduleStatus;
- (void)setComment:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameRaw:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setInviterNameString:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setScheduleForceSend:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)setURLString:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)url;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)commentLabelString;
- (id)displayName;
- (id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3;

@end
