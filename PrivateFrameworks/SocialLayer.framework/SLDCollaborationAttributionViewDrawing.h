
@interface SLDCollaborationAttributionViewDrawing : NSObject <UISDrawing> {
    bool  _forRemote;
    bool  _isRTL;
    UISSlotStyle * _slotStyle;
    SLDCollaborationAttributionViewSlotTag * _tag;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawingSize;
@property (nonatomic) bool forRemote;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRTL;
@property (nonatomic, retain) UISSlotStyle *slotStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) SLDCollaborationAttributionViewSlotTag *tag;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { }*)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })drawingSize;
- (bool)forRemote;
- (id)initWithStyle:(id)arg1 tag:(id)arg2 forRemote:(bool)arg3;
- (bool)isRTL;
- (void)setForRemote:(bool)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setSlotStyle:(id)arg1;
- (void)setTag:(id)arg1;
- (id)slotStyle;
- (id)tag;

@end
