
@interface TDMultisizeImageSetProduction : TDNamedArtworkProduction

@property (nonatomic, retain) NSSet *multisizeImageSetRenditions;
@property (nonatomic, retain) NSSet *sizeIndexes;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)processRendition:(id)arg1 withBackstop:(id)arg2;

@end
