
@interface EKEventDetailCell : EKUITableViewCell {
    bool  _editable;
    EKEvent * _event;
    int  _lastLaidOutPosition;
    double  _lastLaidOutWidth;
}

@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, readonly) bool isEditable;

+ (id)_bodyFontAtDefaultSize;
+ (double)_scaledDistanceCalculatedFromBottomToBaseline:(double)arg1;
+ (double)_scaledDistanceCalculatedFromTopFromBaseline:(double)arg1;
+ (double)detailsBottomVerticalInset;
+ (double)detailsCellDefaultHeight;
+ (double)detailsPostLabelSpace;
+ (double)detailsTopVerticalInset;

- (void).cxx_destruct;
- (double)detailsLeftInset;
- (double)detailsRightInset;
- (id)event;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 style:(long long)arg3;
- (bool)isEditable;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutMarginsDidChange;
- (bool)needsLayoutForWidth:(double)arg1 position:(int)arg2;
- (void)setEvent:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)update;

@end
