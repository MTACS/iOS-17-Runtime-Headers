
@interface DDConversionPreviewController : UIViewController {
    bool  _finance;
    UIView * _mainView;
    struct CGSize { 
        double width; 
        double height; 
    }  _naturalTextSize;
    NSString * _subtitle;
    NSString * _title;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 finance:(bool)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (double)preferredWidth;
- (id)view;

@end
