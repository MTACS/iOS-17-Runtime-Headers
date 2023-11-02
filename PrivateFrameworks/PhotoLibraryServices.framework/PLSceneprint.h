
@interface PLSceneprint : PLManagedObject

@property (nonatomic, retain) PLAdditionalAssetAttributes *additionalAssetAttributes;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSData *duplicateMatchingAlternateData;
@property (nonatomic, retain) NSData *duplicateMatchingData;

+ (id)entityName;
+ (id)insertInCurrentManagedObjectContext:(id)arg1 withAdditionalAssetAttributes:(id)arg2;

- (void)setDuplicateMatchingData:(id)arg1 duplicateMatchingAlternateData:(id)arg2;
- (void)willSave;

@end
