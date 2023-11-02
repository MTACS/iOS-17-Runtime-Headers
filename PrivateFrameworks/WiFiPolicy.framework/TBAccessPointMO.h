
@interface TBAccessPointMO : NSManagedObject <NSCoding, NSSecureCoding, TBAccessPoint>

@property (nonatomic, readonly) NSString *BSSID;
@property (getter=isTCPGood, nonatomic, readonly) bool TCPGood;
@property (nonatomic, copy) NSString *bssid;
@property (nonatomic, copy) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEdge, nonatomic, readonly) bool edge;
@property (nonatomic) bool edge;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lat;
@property (nonatomic, readonly) double latitude;
@property (nonatomic) double lng;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, retain) TBNetworkMO *network;
@property (nonatomic, readonly) <TBScore> *popularityScore;
@property (nonatomic) int popularityScoreValue;
@property (nonatomic, readonly) <TBScore> *qualityScore;
@property (nonatomic) int qualityScoreValue;
@property (readonly) Class superclass;
@property (nonatomic) bool tcpGood;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateNewAccessPointObjectFromMOC:(id)arg1;
+ (void)removeAllAccessPointsInMOC:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)BSSID;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEdge;
- (bool)isTCPGood;
- (double)latitude;
- (double)longitude;
- (id)popularityScore;
- (id)qualityScore;

@end
