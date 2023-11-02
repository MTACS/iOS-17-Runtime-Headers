
@interface MKPlaceCompactCollectionSizeController : NSObject <MKCompactCollectionsSizeProvider> {
    struct { 
        long long displayStyle; 
        long long collectionsPerRow; 
    }  _configuration;
    long long  _context;
    double  _defaultCompactCollectionHeight;
    double  _defaultCompactCollectionWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
}

@property (nonatomic) struct { long long x1; long long x2; } configuration;
@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultCompactCollectionHeight;
@property (nonatomic) double defaultCompactCollectionWidth;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (readonly) Class superclass;

- (struct { long long x1; long long x2; })configuration;
- (long long)context;
- (double)defaultCompactCollectionHeight;
- (double)defaultCompactCollectionWidth;
- (id)initWithCollectionsConfiguration:(struct { long long x1; long long x2; })arg1 usingTraitCollections:(id)arg2 inContext:(long long)arg3;
- (id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)arg1 inContext:(long long)arg2;
- (double)minimumInterItemSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setConfiguration:(struct { long long x1; long long x2; })arg1;
- (void)setContext:(long long)arg1;
- (void)setDefaultCompactCollectionHeight:(double)arg1;
- (void)setDefaultCompactCollectionWidth:(double)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeForCollectionWithMaxCollectionsWidth:(double)arg1;

@end
