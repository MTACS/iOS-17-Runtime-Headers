
@interface BWLearnedNRRequest : NSObject {
    <BWLearnedNRProcessorControllerDelegate> * _delegate;
    int  _err;
    BWLearnedNRInput * _input;
    BWLearnedNROutput * _output;
}

@property (nonatomic, readonly) <BWLearnedNRProcessorControllerDelegate> *delegate;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWLearnedNRInput *input;
@property (nonatomic, readonly) BWLearnedNROutput *output;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (id)input;
- (id)output;
- (void)setErr:(int)arg1;

@end
