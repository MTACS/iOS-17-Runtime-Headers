
@interface CallRecord : NSManagedObject

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSNumber *answered;
@property (nonatomic, copy) NSNumber *call_category;
@property (nonatomic, copy) NSNumber *calltype;
@property (nonatomic) unsigned int chCallStatus;
@property (nonatomic, readonly) long long chHandleType;
@property (nonatomic, readonly) CHRecentCall *chRecentCall;
@property (nonatomic, readonly, copy) NSSet *chRemoteParticipantHandles;
@property (nonatomic, copy) NSUUID *conversationID;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSNumber *disconnected_cause;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, copy) NSNumber *face_time_data;
@property (nonatomic, copy) NSNumber *filtered_out_reason;
@property (nonatomic, copy) NSNumber *handle_type;
@property (nonatomic, copy) NSNumber *hasMessage;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSString *iso_country_code;
@property (nonatomic, copy) NSNumber *junkConfidence;
@property (nonatomic, copy) NSString *junkIdentificationCategory;
@property (nonatomic, copy) NSUUID *localParticipantUUID;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *number_availability;
@property (nonatomic, copy) NSNumber *originated;
@property (nonatomic, copy) NSUUID *outgoingLocalParticipantUUID;
@property (nonatomic, copy) NSUUID *participantGroupUUID;
@property (nonatomic, copy) NSNumber *read;
@property (nonatomic, retain) NSSet *remoteParticipantHandles;
@property (nonatomic, copy) NSString *service_provider;
@property (nonatomic, readonly) bool supportsCallCategory;
@property (nonatomic, readonly) bool supportsHandleType;
@property (nonatomic, readonly) bool supportsHasMessage;
@property (nonatomic, readonly) bool supportsImageURL;
@property (nonatomic, readonly) bool supportsJunkIdentificationCategory;
@property (nonatomic, readonly) bool supportsLocalParticipantUUID;
@property (nonatomic, readonly) bool supportsOutgoingLocalParticipantUUID;
@property (nonatomic, readonly) bool supportsParticipantGroupUUID;
@property (nonatomic, readonly) bool supportsRemoteParticipantHandles;
@property (nonatomic, readonly) bool supportsServiceProvider;
@property (nonatomic, readonly) bool supportsVerificationStatus;
@property (nonatomic, copy) NSString *unique_id;
@property (nonatomic, copy) NSNumber *verificationStatus;

+ (id)fetchRequest;

- (unsigned int)chCallStatus;
- (long long)chHandleType;
- (id)chRecentCall;
- (id)chRemoteParticipantHandles;
- (id)compositeCallCategoryForContext:(id)arg1;
- (id)compositeHandleTypeForContext:(id)arg1;
- (id)compositeJunkConfidenceForContext:(id)arg1;
- (id)compositeLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeOutgoingLocalParticipantUUIDForContext:(id)arg1;
- (id)compositeParticipantGroupUUIDForContext:(id)arg1;
- (id)compositeRemoteParticipantHandlesForContext:(id)arg1;
- (id)compositeServiceProviderForContext:(id)arg1;
- (id)compositeVerificationStatusForContext:(id)arg1;
- (void)setChCallStatus:(unsigned int)arg1;
- (bool)supportsCallCategory;
- (bool)supportsHandleType;
- (bool)supportsHasMessage;
- (bool)supportsImageURL;
- (bool)supportsJunkConfidence;
- (bool)supportsJunkIdentificationCategory;
- (bool)supportsLocalParticipantUUID;
- (bool)supportsOutgoingLocalParticipantUUID;
- (bool)supportsParticipantGroupUUID;
- (bool)supportsRemoteParticipantHandles;
- (bool)supportsServiceProvider;
- (bool)supportsVerificationStatus;

@end
