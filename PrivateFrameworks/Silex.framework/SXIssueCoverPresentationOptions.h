
@interface SXIssueCoverPresentationOptions : NSObject {
    UIColor * _parentBackgroundColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _videoPlaybackEnabled;
}

@property (nonatomic, readonly) UIColor *parentBackgroundColor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) bool videoPlaybackEnabled;

- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 videoPlaybackEnabled:(bool)arg2 parentBackgroundColor:(id)arg3;
- (id)parentBackgroundColor;
- (struct CGSize { double x1; double x2; })size;
- (bool)videoPlaybackEnabled;

@end
