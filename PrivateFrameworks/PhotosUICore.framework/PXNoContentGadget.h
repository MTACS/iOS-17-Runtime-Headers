
@interface PXNoContentGadget : NSObject <PXGadget> {
    double  _contentHeightAdjustment;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    NSString * _message;
    double  _minimumContentHeight;
    PXNoContentGadgetView * _noContentView;
    long long  _priority;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (nonatomic) double contentHeightAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long gadgetCapabilities;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) double minimumContentHeight;
@property (nonatomic, retain) PXNoContentGadgetView *noContentView;
@property (nonatomic) long long priority;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;
@property (nonatomic, readonly) bool wantsMultilineTitle;

- (void).cxx_destruct;
- (unsigned long long)accessoryButtonType;
- (Class)collectionViewItemClass;
- (void)configureWithButtonTitle:(id)arg1 buttonAction:(id /* block */)arg2;
- (double)contentHeightAdjustment;
- (id)delegate;
- (unsigned long long)gadgetCapabilities;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasLoadedContentData;
- (id)init;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 minimumContentHeight:(double)arg3;
- (id)message;
- (double)minimumContentHeight;
- (id)noContentView;
- (double)preferredHeightForViewController:(id)arg1;
- (void)prepareCollectionViewItem:(id)arg1;
- (long long)priority;
- (void)setContentHeightAdjustment:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
