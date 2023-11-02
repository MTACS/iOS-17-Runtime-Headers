
@interface PXHUDVisualization : NSObject {
    UIColor * _color;
    <PXHUDVisualizationDelegate> * _delegate;
    NSString * _title;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) <PXHUDVisualizationDelegate> *delegate;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_notifyDelegateVisualizationDidChange;
- (id)color;
- (id)delegate;
- (void)setColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
