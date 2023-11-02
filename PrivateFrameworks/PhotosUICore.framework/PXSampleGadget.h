
@interface PXSampleGadget : NSObject <PXGadget, PXSampleGadgetViewDelegate> {
    unsigned long long  _accessoryButtonType;
    UIColor * _backgroundColor;
    <PXGadgetDelegate> * _delegate;
    bool  _expanded;
    PXGadgetSpec * _gadgetSpec;
    NSString * _gadgetTitle;
    unsigned long long  _preferredExpandedHeight;
    unsigned long long  _preferredHeight;
    long long  _priority;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic) unsigned long long accessoryButtonType;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (nonatomic, readonly) unsigned long long gadgetCapabilities;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, copy) NSString *gadgetTitle;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) unsigned long long preferredExpandedHeight;
@property (nonatomic) unsigned long long preferredHeight;
@property (nonatomic) long long priority;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;
@property (nonatomic, readonly) bool wantsMultilineTitle;

- (void).cxx_destruct;
- (void)_prepareView:(id)arg1;
- (unsigned long long)accessoryButtonType;
- (id)backgroundColor;
- (Class)collectionViewItemClass;
- (id)delegate;
- (bool)expanded;
- (unsigned long long)gadgetCapabilities;
- (id)gadgetSpec;
- (id)gadgetTitle;
- (unsigned long long)gadgetType;
- (id)init;
- (id)initWithMininumHeight:(double)arg1;
- (id)localizedTitle;
- (unsigned long long)preferredExpandedHeight;
- (unsigned long long)preferredHeight;
- (void)prepareCollectionViewItem:(id)arg1;
- (long long)priority;
- (void)setAccessoryButtonType:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setGadgetTitle:(id)arg1;
- (void)setPreferredExpandedHeight:(unsigned long long)arg1;
- (void)setPreferredHeight:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })view:(id)arg1 colorFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
