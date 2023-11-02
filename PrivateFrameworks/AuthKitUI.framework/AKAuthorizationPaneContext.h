
@interface AKAuthorizationPaneContext : NSObject {
    NSMutableArray * _internalMutableConstraints;
    AKAuthorizationPaneViewController * _paneViewController;
    UIStackView * _stackView;
}

@property (nonatomic, retain) NSMutableArray *internalMutableConstraints;
@property (nonatomic, readonly) NSMutableArray *mutableConstraints;
@property (nonatomic, readonly) AKAuthorizationPaneViewController *paneViewController;
@property (nonatomic, readonly) UIStackView *stackView;

- (void).cxx_destruct;
- (void)addEmptyViewWithSpacing:(double)arg1;
- (void)addSubPane:(id)arg1;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 mutableConstraints:(id)arg3;
- (id)internalMutableConstraints;
- (id)mutableConstraints;
- (id)paneViewController;
- (void)setInternalMutableConstraints:(id)arg1;
- (id)stackView;

@end
