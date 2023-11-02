
@interface BWJasperDisparityProcessorRequest : NSObject {
    <BWJasperDisparityProcessorControllerDelegate> * _delegate;
    int  _err;
    BWJasperDisparityProcessorInput * _input;
}

@property (nonatomic, readonly) <BWJasperDisparityProcessorControllerDelegate> *delegate;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWJasperDisparityProcessorInput *input;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (id)initWithInput:(id)arg1 delegate:(id)arg2;
- (id)input;
- (void)setErr:(int)arg1;

@end
