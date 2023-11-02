
@interface TBNetworkMO : NSManagedObject <NSCoding, NSSecureCoding, TBNetwork>

@property (nonatomic, readonly) NSString *SSID;
@property (nonatomic, readonly) unsigned long long accessPointCount;
@property (nonatomic, readonly) long long accessPointCount;
@property (nonatomic, readonly) NSSet *accessPoints;
@property (nonatomic, retain) NSSet *accessPoints;
@property (nonatomic, readonly) NSString *attributesDescription;
@property (nonatomic, readonly) NSString *authDescription;
@property (nonatomic, readonly) unsigned long long authMask;
@property (nonatomic) long long authMask;
@property (getter=isCaptive, nonatomic, readonly) bool captive;
@property (nonatomic) bool captive;
@property (nonatomic, readonly) double centroidLat;
@property (nonatomic) double centroidLat;
@property (nonatomic, readonly) double centroidLng;
@property (nonatomic) double centroidLng;
@property (nonatomic, copy) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isLowQuality, nonatomic, readonly) bool lowQuality;
@property (nonatomic) bool lowQuality;
@property (getter=isMoving, nonatomic, readonly) bool moving;
@property (nonatomic) bool moving;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSArray *ownerIdentifiers;
@property (nonatomic, retain) NSArray *ownerIdentifiers;
@property (nonatomic, readonly) <TBScore> *popularityScore;
@property (nonatomic) int popularityScoreValue;
@property (getter=isPublic, nonatomic, readonly) bool public;
@property (nonatomic) bool public;
@property (nonatomic, readonly) <TBScore> *qualityScore;
@property (nonatomic) int qualityScoreValue;
@property (nonatomic, readonly) NSString *remoteIdentifier;
@property (readonly) Class superclass;
@property (getter=isSuspicious, nonatomic, readonly) bool suspicious;
@property (nonatomic) bool suspicious;
@property (nonatomic, retain) TBTileMO *tile;
@property (nonatomic, readonly) unsigned long long tileKey;
@property (nonatomic, readonly) long long tileKey;
@property (nonatomic) long long timestamp;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic) long long type;
@property (nonatomic, readonly) unsigned long long venueGroup;
@property (nonatomic) long long venueGroup;
@property (nonatomic, readonly) unsigned int venueType;
@property (nonatomic) int venueType;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateNewNetworkObjectFromMOC:(id)arg1;
+ (void)removeAllNetworksInMOC:(id)arg1;
+ (void)removeNetworksUsingPredicate:(id)arg1 moc:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)SSID;
- (id)attributesDescription;
- (id)authDescription;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCaptive;
- (bool)isLowQuality;
- (bool)isMoving;
- (bool)isPublic;
- (bool)isSuspicious;
- (id)popularityScore;
- (id)qualityScore;
- (id)remoteIdentifier;

@end
