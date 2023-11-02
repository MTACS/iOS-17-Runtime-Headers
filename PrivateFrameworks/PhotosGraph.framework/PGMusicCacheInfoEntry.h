
@interface PGMusicCacheInfoEntry : NSManagedObject

@property (nonatomic, copy) NSData *musicBagContentsAsData;
@property (nonatomic, copy) NSString *version;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
