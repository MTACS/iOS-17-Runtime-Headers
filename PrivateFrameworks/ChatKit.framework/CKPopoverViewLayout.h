
@interface CKPopoverViewLayout : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _anchorSize;
    CKPopoverViewLayoutConfiguration * _configuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    bool  _mutating;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    unsigned long long  _state;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorCenter;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } anchorFrameInContainer;
@property (nonatomic) struct CGSize { double x1; double x2; } anchorSize;
@property (nonatomic, retain) CKPopoverViewLayoutConfiguration *configuration;
@property (nonatomic) struct CGSize { double x1; double x2; } containerSize;
@property (getter=isMutating, setter=setMutating:, nonatomic) bool mutating;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })anchorCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorFrameInContainer;
- (struct CGSize { double x1; double x2; })anchorSize;
- (id)configuration;
- (struct CGSize { double x1; double x2; })containerSize;
- (id)description;
- (id)initWithConfiguration:(id)arg1;
- (bool)isMutating;
- (id)newLayoutMetricsWithCoordinateSpace:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverFrameInContainer;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setAnchorCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnchorSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMutating:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)updateProperties:(id /* block */)arg1;

@end
