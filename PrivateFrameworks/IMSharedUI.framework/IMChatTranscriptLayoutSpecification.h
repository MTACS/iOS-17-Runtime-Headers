
@interface IMChatTranscriptLayoutSpecification : NSObject <NSCopying> {
    double  _bottomMargin;
    double  _largeVerticalItemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutBoundsSize;
    double  _leadingMargin;
    double  _maximumBubbleWidth;
    double  _mediumVerticalItemSpacing;
    double  _smallVerticalItemSpacing;
    double  _topMargin;
    double  _trailingMargin;
    double  _zeroVerticalItemSpacing;
}

@property (nonatomic) double bottomMargin;
@property (nonatomic) double largeVerticalItemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutBoundsSize;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double maximumBubbleWidth;
@property (nonatomic) double mediumVerticalItemSpacing;
@property (nonatomic) double smallVerticalItemSpacing;
@property (nonatomic) double topMargin;
@property (nonatomic) double trailingMargin;
@property (nonatomic) double zeroVerticalItemSpacing;

- (double)bottomMargin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)largeVerticalItemSpacing;
- (struct CGSize { double x1; double x2; })layoutBoundsSize;
- (double)leadingMargin;
- (double)maximumBubbleWidth;
- (double)mediumVerticalItemSpacing;
- (void)setBottomMargin:(double)arg1;
- (void)setLargeVerticalItemSpacing:(double)arg1;
- (void)setLayoutBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLeadingMargin:(double)arg1;
- (void)setMaximumBubbleWidth:(double)arg1;
- (void)setMediumVerticalItemSpacing:(double)arg1;
- (void)setSmallVerticalItemSpacing:(double)arg1;
- (void)setTopMargin:(double)arg1;
- (void)setTrailingMargin:(double)arg1;
- (void)setZeroVerticalItemSpacing:(double)arg1;
- (double)smallVerticalItemSpacing;
- (double)topMargin;
- (double)trailingMargin;
- (double)zeroVerticalItemSpacing;

@end
