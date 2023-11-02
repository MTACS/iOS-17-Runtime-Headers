
@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFParticipant *participant;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)coercions;
+ (id)contactCoercionHandler;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)emailAddressCoercionHandler;
+ (id)filterDescription;
+ (id)ownedTypes;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)possibleRoles;
+ (id)possibleStatuses;
+ (id)possibleTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)typeDescription;

- (id)defaultSourceForRepresentation:(id)arg1;
- (id)emailAddress;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)isCurrentUser;
- (id)participant;
- (id)role;
- (id)status;
- (id)type;

@end
