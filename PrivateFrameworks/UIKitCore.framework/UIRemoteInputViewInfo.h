
@interface UIRemoteInputViewInfo : NSObject {
    unsigned int  _contextId;
    struct NSEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    int  _processId;
    bool  _shouldShowDockView;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) unsigned int contextId;
@property (nonatomic) struct NSEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) int processId;
@property (nonatomic, readonly) RTIInputViewInfo *rtiInputViewInfo;
@property (nonatomic) bool shouldShowDockView;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (unsigned int)contextId;
- (id)description;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (int)processId;
- (id)rtiInputViewInfo;
- (void)setContextId:(unsigned int)arg1;
- (void)setInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setProcessId:(int)arg1;
- (void)setShouldShowDockView:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldShowDockView;
- (struct CGSize { double x1; double x2; })size;

@end
