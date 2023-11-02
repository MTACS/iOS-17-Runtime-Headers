
@interface MKPlaceCollectionsSizeController : NSObject <MKCollectionsSizeProvider> {
    struct { 
        long long displayStyle; 
        long long collectionsPerRow; 
    }  _collectionsConfiguration;
    double  _defaultCollectionHeight;
    double  _defaultCollectionWidth;
    bool  _isMarzipan;
    bool  _isSingleCollection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
}

@property (nonatomic) struct { long long x1; long long x2; } collectionsConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultCollectionHeight;
@property (nonatomic) double defaultCollectionWidth;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMarzipan;
@property (nonatomic) bool isSingleCollection;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (readonly) Class superclass;

- (struct { long long x1; long long x2; })collectionsConfiguration;
- (double)defaultCollectionHeight;
- (double)defaultCollectionWidth;
- (id)initWithCollectionsConfiguration:(struct { long long x1; long long x2; })arg1 isSingleCollection:(bool)arg2 usingTraitCollections:(id)arg3 inContext:(long long)arg4;
- (id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)arg1 inContext:(long long)arg2;
- (bool)isMarzipan;
- (bool)isSingleCollection;
- (double)minimumInterItemSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setCollectionsConfiguration:(struct { long long x1; long long x2; })arg1;
- (void)setDefaultCollectionHeight:(double)arg1;
- (void)setDefaultCollectionWidth:(double)arg1;
- (void)setIsMarzipan:(bool)arg1;
- (void)setIsSingleCollection:(bool)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeForCollectionWithMaxCollectionsWidth:(double)arg1;

@end
