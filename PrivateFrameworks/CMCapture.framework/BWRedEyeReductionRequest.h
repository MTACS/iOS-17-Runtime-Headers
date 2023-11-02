
@interface BWRedEyeReductionRequest : NSObject {
    <BWRedEyeReductionControllerDelegate> * _delegate;
    BWRedEyeReductionControllerInput * _input;
    int  _mode;
}

@property (nonatomic, readonly) <BWRedEyeReductionControllerDelegate> *delegate;
@property (nonatomic, readonly) BWRedEyeReductionControllerInput *input;
@property (nonatomic) int mode;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithInput:(id)arg1 delegate:(id)arg2;
- (id)input;
- (int)mode;
- (void)setMode:(int)arg1;

@end
