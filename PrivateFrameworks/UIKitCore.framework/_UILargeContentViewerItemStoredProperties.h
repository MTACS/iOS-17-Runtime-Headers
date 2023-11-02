
@interface _UILargeContentViewerItemStoredProperties : NSObject <NSSecureCoding> {
    bool  _didSetLargeContentImage;
    bool  _didSetLargeContentImageInsets;
    bool  _didSetLargeContentTitle;
    bool  _didSetScalesLargeContentImage;
    bool  _didSetShowsLargeContentViewer;
    UIImage * _largeContentImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _largeContentImageInsets;
    NSString * _largeContentTitle;
    bool  _scalesLargeContentImage;
    bool  _showsLargeContentViewer;
}

@property (nonatomic) bool didSetLargeContentImage;
@property (nonatomic) bool didSetLargeContentImageInsets;
@property (nonatomic) bool didSetLargeContentTitle;
@property (nonatomic) bool didSetScalesLargeContentImage;
@property (nonatomic) bool didSetShowsLargeContentViewer;
@property (nonatomic, retain) UIImage *largeContentImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } largeContentImageInsets;
@property (nonatomic, copy) NSString *largeContentTitle;
@property (nonatomic) bool scalesLargeContentImage;
@property (nonatomic) bool showsLargeContentViewer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)didSetLargeContentImage;
- (bool)didSetLargeContentImageInsets;
- (bool)didSetLargeContentTitle;
- (bool)didSetScalesLargeContentImage;
- (bool)didSetShowsLargeContentViewer;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)largeContentImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeContentImageInsets;
- (id)largeContentTitle;
- (bool)scalesLargeContentImage;
- (void)setDidSetLargeContentImage:(bool)arg1;
- (void)setDidSetLargeContentImageInsets:(bool)arg1;
- (void)setDidSetLargeContentTitle:(bool)arg1;
- (void)setDidSetScalesLargeContentImage:(bool)arg1;
- (void)setDidSetShowsLargeContentViewer:(bool)arg1;
- (void)setLargeContentImage:(id)arg1;
- (void)setLargeContentImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLargeContentTitle:(id)arg1;
- (void)setScalesLargeContentImage:(bool)arg1;
- (void)setShowsLargeContentViewer:(bool)arg1;
- (bool)showsLargeContentViewer;

@end
