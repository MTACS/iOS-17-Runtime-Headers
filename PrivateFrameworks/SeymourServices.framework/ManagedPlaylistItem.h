
@interface ManagedPlaylistItem : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic) long long healthKitActivityType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int index;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, retain) ManagedPlaylist *playlist;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
