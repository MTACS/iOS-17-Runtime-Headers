
@interface WFDeletePhotosIntent : INIntent

@property (nonatomic, copy) NSArray *assetIdentifiers;
@property (nonatomic, copy) NSArray *photos;

@end
