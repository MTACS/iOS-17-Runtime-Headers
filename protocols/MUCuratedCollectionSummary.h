
@protocol MUCuratedCollectionSummary <NSObject>

@required

- (NSString *)collectionName;
- (unsigned long long)numberOfPlaces;
- (UIImage *)publisherIconForIsNightMode:(bool)arg1;
- (NSString *)publisherName;

@end
