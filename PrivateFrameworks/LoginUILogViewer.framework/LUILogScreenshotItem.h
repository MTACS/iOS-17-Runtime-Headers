
@interface LUILogScreenshotItem : NSObject {
    NSDate * _screenshotDate;
    UIImage * _screenshotImage;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _visibleRange;
}

@property (nonatomic, retain) NSDate *screenshotDate;
@property (nonatomic, retain) UIImage *screenshotImage;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } visibleRange;

- (void).cxx_destruct;
- (id)screenshotDate;
- (id)screenshotImage;
- (void)setScreenshotDate:(id)arg1;
- (void)setScreenshotImage:(id)arg1;
- (void)setVisibleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRange;

@end
