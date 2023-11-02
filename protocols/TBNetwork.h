
@protocol TBNetwork <NSObject, TBScorable>

@required

- (NSString *)SSID;
- (NSSet *)accessPoints;
- (NSString *)attributesDescription;
- (NSString *)authDescription;
- (unsigned long long)authMask;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isCaptive;
- (bool)isLowQuality;
- (bool)isMoving;
- (bool)isPublic;
- (bool)isSuspicious;
- (NSArray *)ownerIdentifiers;
- (NSString *)remoteIdentifier;
- (unsigned long long)type;
- (unsigned long long)venueGroup;
- (unsigned int)venueType;

@optional

- (unsigned long long)accessPointCount;
- (double)centroidLat;
- (double)centroidLng;
- (unsigned long long)tileKey;

@end
