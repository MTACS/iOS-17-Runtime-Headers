
@interface PBUIImageSlotView : UIView <PBUIDeferredImageSlotObserving> {
    PBUIImageSlot * _imageSlot;
    UIImageView * _imageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PBUIImageSlot *imageSlot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_pointSize;
- (void)_updateWithImage:(id)arg1;
- (void)deferredImageSlot:(id)arg1 didUpdateImage:(id)arg2;
- (id)imageSlot;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setImageSlot:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
