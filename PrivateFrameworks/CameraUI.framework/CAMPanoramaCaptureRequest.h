
@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {
    <CAMPanoramaCaptureRequestDelegate> * _delegate;
}

@property (nonatomic, readonly) <CAMPanoramaCaptureRequestDelegate> *delegate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(bool)arg2 includeAnalytics:(bool)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
