
@interface PKExpressBannerLeadingView : UIView <SBUISystemApertureAccessoryView> {
    NSMutableArray * _completions;
    CALayer * _contentLayer;
    CAStateController * _controller;
    <PKExpressBannerLeadingViewDelegate> * _delegate;
    CALayer * _frontLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _nativeAlignmentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _nativeSize;
    PKPass * _pass;
    CAPortalLayer * _passPortal;
    PKPassThumbnailView * _passView;
    int  _sizeClass;
    int  _state;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _targetAlignmentInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetAlignmentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    NSObject<OS_dispatch_source> * _transitionTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
