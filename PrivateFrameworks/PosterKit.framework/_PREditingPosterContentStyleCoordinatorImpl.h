
@interface _PREditingPosterContentStyleCoordinatorImpl : NSObject <_PREditingPosterContentStyleCoordinatorImpl> {
    double  _contentsLuminance;
    UIView * _itemView;
    <PRPosterContentStyle> * _style;
    double  _variation;
}

@property (nonatomic) double contentsLuminance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *itemView;
@property (nonatomic, readonly) double itemViewLuminance;
@property (nonatomic, retain) <PRPosterContentStyle> *style;
@property (readonly) Class superclass;
@property (nonatomic) double variation;
@property (nonatomic, readonly) UIView *variationSliderThumbView;
@property (nonatomic, readonly) UIView *variationSliderTrackView;

- (void).cxx_destruct;
- (double)contentsLuminance;
- (id)initWithStyle:(id)arg1;
- (id)itemView;
- (double)itemViewLuminance;
- (void)setContentsLuminance:(double)arg1;
- (void)setStyle:(id)arg1;
- (void)setVariation:(double)arg1;
- (id)style;
- (double)variation;
- (id)variationSliderThumbView;
- (id)variationSliderTrackView;
- (id)variationSupportingStyle;

@end
