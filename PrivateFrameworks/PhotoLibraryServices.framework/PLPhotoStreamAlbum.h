
@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic, retain) NSString *personID;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingPersonID;
+ (id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(bool)arg3;

- (void)addAssetOrderedByDataTaken:(id)arg1;
- (void)awakeFromInsert;
- (void)enforceImageLimitIfNecessary;
- (id)personID;
- (void)setPersonID:(id)arg1;
- (bool)shouldDeleteWhenEmpty;

@end
