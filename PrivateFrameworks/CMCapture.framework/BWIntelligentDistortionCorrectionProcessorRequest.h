
@interface BWIntelligentDistortionCorrectionProcessorRequest : NSObject {
    <BWStillImageProcessorControllerDelegate> * _delegate;
    int  _err;
    BWIntelligentDistortionCorrectionProcessorInput * _input;
}

@property (nonatomic, readonly) <BWStillImageProcessorControllerDelegate> *delegate;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWIntelligentDistortionCorrectionProcessorInput *input;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (id)input;
- (void)setErr:(int)arg1;

@end
