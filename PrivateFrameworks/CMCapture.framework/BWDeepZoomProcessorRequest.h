
@interface BWDeepZoomProcessorRequest : NSObject {
    <BWDeepZoomProcessorControllerDelegate> * _delegate;
    int  _err;
    BWDeepZoomProcessorInput * _input;
}

@property (nonatomic, readonly) <BWDeepZoomProcessorControllerDelegate> *delegate;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWDeepZoomProcessorInput *input;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (id)input;
- (void)setErr:(int)arg1;

@end
