
@interface AVTViewCarouselLayout : NSObject <AVTViewCarouselLayout> {
    struct CGSize { 
        double width; 
        double height; 
    }  _avtViewAspectRatio;
    bool  _fillContainer;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } avtViewAspectRatio;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fillContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)adaptativeLayoutWithAVTViewAspectRatio:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })fullSizeForBounds:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })severalItemsSizeForBounds:(struct CGSize { double x1; double x2; })arg1 aspectRatio:(struct CGSize { double x1; double x2; })arg2;

- (struct CGSize { double x1; double x2; })avatarViewSizeForAvailableContentSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })avtViewAspectRatio;
- (struct CGSize { double x1; double x2; })contentViewSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)fillContainer;
- (id)initWithAVTViewAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setFillContainer:(bool)arg1;

@end
