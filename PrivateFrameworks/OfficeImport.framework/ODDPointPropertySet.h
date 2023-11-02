
@interface ODDPointPropertySet : NSObject {
    double  mCustomOffsetX;
    double  mCustomOffsetY;
    double  mCustomScaleX;
    double  mCustomScaleY;
    bool  mCustomVerticalFlip;
    NSString * mLayoutTypeId;
    NSObject * mPresentationAssociatedId;
    NSString * mPresentationName;
    int  mPresentationStyleCount;
    int  mPresentationStyleIndex;
    NSString * mPresentationStyleLabel;
}

- (void).cxx_destruct;
- (double)customOffsetX;
- (double)customOffsetY;
- (double)customScaleX;
- (double)customScaleY;
- (bool)customVerticalFlip;
- (id)description;
- (id)layoutTypeId;
- (id)presentationAssociatedId;
- (id)presentationName;
- (int)presentationStyleCount;
- (int)presentationStyleIndex;
- (id)presentationStyleLabel;
- (void)setCustomOffsetX:(double)arg1;
- (void)setCustomOffsetY:(double)arg1;
- (void)setCustomScaleX:(double)arg1;
- (void)setCustomScaleY:(double)arg1;
- (void)setCustomVerticalFlip:(bool)arg1;
- (void)setLayoutTypeId:(id)arg1;
- (void)setPresentationAssociatedId:(id)arg1;
- (void)setPresentationName:(id)arg1;
- (void)setPresentationStyleCount:(int)arg1;
- (void)setPresentationStyleIndex:(int)arg1;
- (void)setPresentationStyleLabel:(id)arg1;

@end
