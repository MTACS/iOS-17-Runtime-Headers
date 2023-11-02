
@interface TBTileMO : NSManagedObject <TBTile>

@property (nonatomic, readonly, copy) NSDate *created;
@property (nonatomic, copy) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, copy) NSString *etag;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long key;
@property (nonatomic) long long key;
@property (nonatomic, readonly) long long networkCount;
@property (nonatomic, readonly) unsigned long long networkCount;
@property (nonatomic, retain) NSSet *networks;
@property (readonly) Class superclass;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateNewTileObjectFromMOC:(id)arg1;
+ (void)removeAllTilesInMOC:(id)arg1;
+ (void)removeTilesUsingPredicate:(id)arg1 moc:(id)arg2;

@end
