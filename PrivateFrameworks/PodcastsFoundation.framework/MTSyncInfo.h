
@interface MTSyncInfo : NSManagedObject

@property (nonatomic) long long artworkUpdateRevision;
@property (nonatomic) int entityType;
@property (nonatomic) MTEpisode *episode;
@property (nonatomic) long long insertionRevision;
@property (nonatomic) MTPlaylist *playlist;
@property (nonatomic) MTPodcast *podcast;
@property (nonatomic) long long syncID;
@property (nonatomic) int syncability;
@property (nonatomic) long long updateRevision;
@property (nonatomic, retain) NSString *uuid;

+ (id)predicateForHasNoInverseRelation;
+ (id)predicateForIsCurrentlySyncable:(bool)arg1;

@end
