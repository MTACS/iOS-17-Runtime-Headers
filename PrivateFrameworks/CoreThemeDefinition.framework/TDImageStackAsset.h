
@interface TDImageStackAsset : TDAsset

@property (nonatomic, retain) NSSet *renditions;

- (bool)hasCursorProduction;
- (bool)hasProduction;
- (id)imageStackDataWithDocument:(id)arg1;

@end
