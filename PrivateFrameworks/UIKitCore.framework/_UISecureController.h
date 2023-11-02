
@interface _UISecureController : NSObject <_UISlotViewContentDelegate> {
    struct CGColor { } * _baseBackgroundColor;
    struct CGColor { } * _baseForegroundColor;
    _UISSecureControlCategory * _category;
    double  _cornerRadius;
    long long  _cornerStyle;
    bool  _enchanted;
    unsigned long long  _imagePlacement;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
    _UISSecureControlSizeSpec * _lastSizeSpec;
    UIControl<_UISecureControl> * _secureControl;
    bool  _shouldLayoutSynchronously;
    _UISlotView * _slotView;
}

@property (nonatomic) struct CGColor { }*baseBackgroundColor;
@property (nonatomic) struct CGColor { }*baseForegroundColor;
@property (nonatomic, readonly) _UISSecureControlCategory *category;
@property (nonatomic) double cornerRadius;
@property (nonatomic) long long cornerStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enchanted;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, readonly) unsigned int secureName;
@property (nonatomic) bool shouldLayoutSynchronously;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGColor { }*)baseBackgroundColor;
- (struct CGColor { }*)baseForegroundColor;
- (id)category;
- (double)cornerRadius;
- (long long)cornerStyle;
- (id)currentTagForSlotView:(id)arg1;
- (void)dealloc;
- (bool)enchanted;
- (unsigned long long)imagePlacement;
- (id)initWithCategory:(id)arg1 control:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (unsigned int)secureName;
- (void)setBaseBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBaseForegroundColor:(struct CGColor { }*)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornerStyle:(long long)arg1;
- (void)setImagePlacement:(unsigned long long)arg1;
- (void)setShouldLayoutSynchronously:(bool)arg1;
- (bool)shouldGetFinalContentSynchronouslyInSlotView:(id)arg1;
- (bool)shouldLayoutSynchronously;
- (id)slotMachineForFinalContentInSlotView:(id)arg1;
- (void)slotView:(id)arg1 didSetFinalContent:(bool)arg2 forStyle:(id)arg3 tag:(id)arg4;
- (void)slotView:(id)arg1 didSetInitialContent:(bool)arg2 forStyle:(id)arg3 tag:(id)arg4;
- (id)slotView:(id)arg1 initialContentForStyle:(id)arg2 tag:(id)arg3;
- (id)slotView:(id)arg1 replacementForFinalContent:(id)arg2 style:(id)arg3 tag:(id)arg4;
- (bool)slotView:(id)arg1 shouldSetFinalContentForStyle:(id)arg2 tag:(id)arg3;
- (bool)slotView:(id)arg1 shouldSetInitialContentForStyle:(id)arg2 tag:(id)arg3;
- (void)updateSlotView;
- (void)updateState;

@end
