
@interface WFDrawerNavigationBarTitleView : _UINavigationBarTitleView {
    WFInspectorPaneSegmentedControlHostingView * _hostingView;
}

@property (nonatomic, readonly) WFInspectorPaneSegmentedControlHostingView *hostingView;

- (void).cxx_destruct;
- (id)hostingView;
- (id)initWithDelegate:(id)arg1 showsDetailsButton:(bool)arg2;

@end
