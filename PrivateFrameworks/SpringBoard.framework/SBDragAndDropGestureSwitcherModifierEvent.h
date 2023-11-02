
@interface SBDragAndDropGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {
    NSString * _draggedSceneIdentifier;
    long long  _draggedSceneLayoutRole;
    long long  _dropAction;
    double  _platterScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _platterViewFrame;
    bool  _platterized;
    bool  _previewHasLifted;
    bool  _switcherDrag;
    SBSwitcherDropRegionContext * _switcherDropRegionContext;
    bool  _windowDrag;
}

@property (nonatomic, retain) NSString *draggedSceneIdentifier;
@property (nonatomic) long long draggedSceneLayoutRole;
@property (nonatomic) long long dropAction;
@property (nonatomic) double platterScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } platterViewFrame;
@property (getter=hasPlatterized, nonatomic) bool platterized;
@property (getter=hasPreviewLifted, nonatomic) bool previewHasLifted;
@property (getter=isSwitcherDrag, nonatomic) bool switcherDrag;
@property (nonatomic, retain) SBSwitcherDropRegionContext *switcherDropRegionContext;
@property (getter=isWindowDrag, nonatomic) bool windowDrag;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)draggedSceneIdentifier;
- (long long)draggedSceneLayoutRole;
- (long long)dropAction;
- (bool)hasPlatterized;
- (bool)hasPreviewLifted;
- (bool)isSwitcherDrag;
- (bool)isWindowDrag;
- (double)platterScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })platterViewFrame;
- (void)setDraggedSceneIdentifier:(id)arg1;
- (void)setDraggedSceneLayoutRole:(long long)arg1;
- (void)setDropAction:(long long)arg1;
- (void)setPlatterScale:(double)arg1;
- (void)setPlatterViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlatterized:(bool)arg1;
- (void)setPreviewHasLifted:(bool)arg1;
- (void)setSwitcherDrag:(bool)arg1;
- (void)setSwitcherDropRegionContext:(id)arg1;
- (void)setWindowDrag:(bool)arg1;
- (id)switcherDropRegionContext;
- (long long)type;

@end
