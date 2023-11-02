
@interface PREditingPosterContentStyleCoordinator : NSObject {
    double  _contentsLuminance;
    <_PREditingPosterContentStyleCoordinatorImpl> * _coordinatorImpl;
    <PRPosterContentStyle> * _style;
    bool  _suggested;
    UIImageView * _symbolImageView;
}

@property (nonatomic) double contentsLuminance;
@property (nonatomic, readonly) UIView *itemView;
@property (nonatomic, readonly) double itemViewLuminance;
@property (nonatomic, readonly) <PRPosterContentStyle> *style;
@property (getter=isSuggested, nonatomic, readonly) bool suggested;
@property (nonatomic) double variation;
@property (nonatomic, readonly) UIView *variationSliderThumbView;
@property (nonatomic, readonly) UIView *variationSliderTrackView;

+ (id)_legibleIconColorForLuminance:(double)arg1;
+ (id)coordinatorForColorWellView:(id)arg1 vibrant:(bool)arg2;
+ (id)coordinatorImplForStyle:(id)arg1;

- (void).cxx_destruct;
- (double)contentsLuminance;
- (id)initWithInitialStyle:(id)arg1 suggested:(bool)arg2;
- (id)initWithInitialStyle:(id)arg1 suggested:(bool)arg2 coordinator:(id)arg3;
- (bool)isSuggested;
- (id)itemView;
- (double)itemViewLuminance;
- (void)setContentsLuminance:(double)arg1;
- (void)setVariation:(double)arg1;
- (id)style;
- (double)variation;
- (id)variationSliderThumbView;
- (id)variationSliderTrackView;

@end
