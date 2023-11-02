
@interface PKTextInputGestureFeedbackView : UIView {
    NSArray * __highlightViews;
    bool  __needsRefresh;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __reserveSpaceCaretRect;
    UIView * __reserveSpaceView;
    PKTextInputFeedbackController * _dataSourceController;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
