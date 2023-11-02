
@protocol PXSmartAlbumEditingContext <NSObject>

@required

- (NSArray *)ISOValuesWithFormatter:(NSNumberFormatter *)arg1;
- (NSArray *)albumValues;
- (NSArray *)apertureValuesWithFormatter:(NSNumberFormatter *)arg1;
- (NSArray *)cameraModels;
- (NSArray *)conditionTypeValues;
- (NSArray *)focalLengthValuesWithFormatter:(NSNumberFormatter *)arg1;
- (NSArray *)keywordValues;
- (NSArray *)lensModels;
- (NSArray *)personNames;
- (NSArray *)shutterSpeedValuesWithFormatter:(NSNumberFormatter *)arg1;

@end
