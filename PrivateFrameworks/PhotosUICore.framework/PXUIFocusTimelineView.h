
@interface PXUIFocusTimelineView : PXFocusTimelineView <UIGestureRecognizerDelegate> {
    long long  _autoFocusImageInterfaceStyle;
    UIImage * _autoFocusMarkerImage;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) long long autoFocusImageInterfaceStyle;
@property (nonatomic, retain) UIImage *autoFocusMarkerImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (void)_PXUIFocusTimelineView_commonInit;
- (void)_handleTap:(id)arg1;
- (id)autoFocusEventMarkerImage;
- (long long)autoFocusImageInterfaceStyle;
- (id)autoFocusMarkerImage;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)setAutoFocusImageInterfaceStyle:(long long)arg1;
- (void)setAutoFocusMarkerImage:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (id)tapGestureRecognizer;
- (id)userInitiatedFocusEventMarkerImage;

@end
