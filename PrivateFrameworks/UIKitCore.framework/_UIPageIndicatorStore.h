
@interface _UIPageIndicatorStore : NSObject {
    struct { 
        struct SizeForMaximumContentSizeCache { 
            unsigned int dirty : 1; 
            double fittingLength; 
            struct CGSize { 
                double width; 
                double height; 
            } maximumSize; 
        } fittingSize; 
        struct NumberOfVisibleIndicatorsForStartIndexCache { 
            unsigned int dirty : 1; 
            double fittingLength; 
            long long startIndex; 
            long long numberOfIndicators; 
        } indicatorCount; 
        struct ContentSizeForNumberOfPagesCache { 
            unsigned int dirty : 1; 
            double numberOfPages; 
            struct CGSize { 
                double width; 
                double height; 
            } contentSize; 
        } contentSize; 
        struct MinimumContentSizeForIndicatorsInRangeCache { 
            unsigned int dirty : 1; 
            struct _NSRange { 
                unsigned long long location; 
                unsigned long long length; 
            } range; 
            struct CGSize { 
                double width; 
                double height; 
            } contentSize; 
        } contentSizeInRange; 
    }  _cache;
    UIImage * _defaultImage;
    _UIPageIndicatorStoreObject * _defaultObject;
    <_UIPageIndicatorStoreDelegate> * _delegate;
    long long  _direction;
    struct { 
        struct SizeForMaximumContentSizeCache { 
            unsigned int dirty : 1; 
            double fittingLength; 
            struct CGSize { 
                double width; 
                double height; 
            } maximumSize; 
        } fittingSize; 
        struct NumberOfVisibleIndicatorsForStartIndexCache { 
            unsigned int dirty : 1; 
            double fittingLength; 
            long long startIndex; 
            long long numberOfIndicators; 
        } indicatorCount; 
        struct ContentSizeForNumberOfPagesCache { 
            unsigned int dirty : 1; 
            double numberOfPages; 
            struct CGSize { 
                double width; 
                double height; 
            } contentSize; 
        } contentSize; 
        struct MinimumContentSizeForIndicatorsInRangeCache { 
            unsigned int dirty : 1; 
            struct _NSRange { 
                unsigned long long location; 
                unsigned long long length; 
            } range; 
            struct CGSize { 
                double width; 
                double height; 
            } contentSize; 
        } contentSizeInRange; 
    }  _expandedCache;
    double  _indicatorSpacing;
    UIImage * _preferredActiveImage;
    UIImage * _preferredImage;
    NSMutableArray * _store;
}

@property (nonatomic) <_UIPageIndicatorStoreDelegate> *delegate;
@property (nonatomic) long long direction;
@property (nonatomic, readonly) UIImage *indicatorImage;
@property (nonatomic) double indicatorSpacing;
@property (nonatomic, readonly) long long numberOfPages;
@property (nonatomic, retain) UIImage *preferredActiveImage;
@property (nonatomic, retain) UIImage *preferredImage;
@property (nonatomic, retain) NSMutableArray *store;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_contentSizeForIndicatorsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 hasExpandedActiveIndicator:(bool)arg2;
- (id)_defaultIndicatorImage;
- (struct CGSize { double x1; double x2; })_indicatorSizeForObject:(id)arg1;
- (void)_insertImage:(id)arg1 forPage:(long long)arg2 active:(bool)arg3;
- (long long)_objectIndexForPage:(long long)arg1 lower:(long long)arg2 upper:(long long)arg3;
- (void)_removeImageForPage:(long long)arg1 active:(bool)arg2;
- (void)_resetStore;
- (struct CGSize { double x1; double x2; })_sizeForMaximumContentSizeFittingLength:(double)arg1 hasExpandedActiveIndicator:(bool)arg2;
- (void)_updateImage:(id)arg1 forPage:(long long)arg2 active:(bool)arg3;
- (id)activeIndicatorImageForPage:(long long)arg1;
- (struct CGSize { double x1; double x2; })contentSizeForNumberOfPages:(long long)arg1 hasExpandedActiveIndicator:(bool)arg2;
- (id)customActiveIndicatorImageForPage:(long long)arg1;
- (id)customIndicatorImageForPage:(long long)arg1;
- (struct CGSize { double x1; double x2; })defaultIndicatorSize;
- (id)delegate;
- (long long)direction;
- (id)indicatorImage;
- (id)indicatorImageForPage:(long long)arg1;
- (double)indicatorPositionForContinuousPage:(double)arg1 expandedIndicatorPage:(long long)arg2;
- (struct CGSize { double x1; double x2; })indicatorSizeForPage:(long long)arg1;
- (double)indicatorSpacing;
- (id)init;
- (void)invalidateLayoutCache;
- (struct CGSize { double x1; double x2; })minimumContentSizeForIndicatorsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 hasExpandedActiveIndicator:(bool)arg2;
- (long long)numberOfPages;
- (long long)numberOfVisibleIndicatorsForStartIndex:(long long)arg1 fittingLength:(double)arg2 hasExpandedActiveIndicator:(bool)arg3;
- (long long)objectIndexForPage:(long long)arg1;
- (id)preferredActiveImage;
- (id)preferredImage;
- (struct CGSize { double x1; double x2; })resolvedIndicatorLayoutSizeForPage:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setIndicatorSpacing:(double)arg1;
- (void)setPreferredActiveImage:(id)arg1;
- (void)setPreferredImage:(id)arg1;
- (void)setStore:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForMaximumContentSizeFittingLength:(double)arg1 hasExpandedActiveIndicator:(bool)arg2;
- (id)store;
- (void)updateActiveImage:(id)arg1 forPage:(long long)arg2;
- (void)updateImage:(id)arg1 forPage:(long long)arg2;
- (void)updateStoreForNumberOfPages:(long long)arg1;
- (void)validateDataStore;

@end
