
@interface _UIPageIndicatorStoreObject : NSObject {
    UIImage * _activeImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _activeIndicatorSize;
    UIImage * _customImage;
    long long  _endIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _indicatorSize;
    long long  _startIndex;
}

@property (nonatomic, retain) UIImage *activeImage;
@property (nonatomic) struct CGSize { double x1; double x2; } activeIndicatorSize;
@property (nonatomic, retain) UIImage *customImage;
@property (nonatomic) long long endIndex;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic) struct CGSize { double x1; double x2; } indicatorSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } resolvedSize;
@property (nonatomic) long long startIndex;

- (void).cxx_destruct;
- (void)_copyImagesFromObject:(id)arg1;
- (id)activeImage;
- (struct CGSize { double x1; double x2; })activeIndicatorSize;
- (id)customImage;
- (id)description;
- (long long)endIndex;
- (bool)hasImage;
- (struct CGSize { double x1; double x2; })indicatorSize;
- (id)initWithStartIndex:(long long)arg1 endIndex:(long long)arg2;
- (void)invalidateLayoutInfo;
- (struct CGSize { double x1; double x2; })resolvedSize;
- (void)setActiveImage:(id)arg1;
- (void)setActiveIndicatorSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCustomImage:(id)arg1;
- (void)setEndIndex:(long long)arg1;
- (void)setIndicatorSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStartIndex:(long long)arg1;
- (id)splitAtIndex:(long long)arg1 withImage:(id)arg2 active:(bool)arg3;
- (long long)startIndex;
- (bool)validPageWithinBound:(long long)arg1;

@end
