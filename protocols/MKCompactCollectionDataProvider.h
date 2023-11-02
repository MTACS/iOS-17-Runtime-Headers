
@protocol MKCompactCollectionDataProvider

@required

- (MKPlaceCompactCollectionViewModel *)compactCollectionAtIndex:(unsigned long long)arg1 sectionIndex:(unsigned long long)arg2;
- (NSArray *)compactCollectionsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (NSAttributedString *)titleForSectionFromTitle:(NSString *)arg1;

@end
