
@interface MTUPPMetadata : NSManagedObject

@property (nonatomic) double bookmarkTime;
@property (nonatomic) bool hasBeenPlayed;
@property (nonatomic, retain) NSString *metadataIdentifier;
@property (nonatomic) long long playCount;
@property (nonatomic) double timestamp;

@end
