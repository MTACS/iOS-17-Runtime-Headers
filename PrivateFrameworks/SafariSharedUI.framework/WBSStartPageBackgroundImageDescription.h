
@interface WBSStartPageBackgroundImageDescription : NSObject {
    double  _luminance;
    NSURL * _url;
}

@property (nonatomic, readonly) double luminance;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 luminance:(double)arg2;
- (double)luminance;
- (id)url;

@end
