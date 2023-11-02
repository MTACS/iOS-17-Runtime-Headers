
@interface CAMetalDisplayLinkUpdate : NSObject {
    <CAMetalDrawable> * _drawable;
    double  _targetPresentationTimestamp;
    double  _targetTimestamp;
}

@property (nonatomic, readonly) <CAMetalDrawable> *drawable;
@property (nonatomic, readonly) double targetPresentationTimestamp;
@property (nonatomic, readonly) double targetTimestamp;

+ (id)updateWithDrawable:(id)arg1 targetTimestamp:(double)arg2 targetPresentationTimestamp:(double)arg3;

- (void)dealloc;
- (id)drawable;
- (double)targetPresentationTimestamp;
- (double)targetTimestamp;

@end
