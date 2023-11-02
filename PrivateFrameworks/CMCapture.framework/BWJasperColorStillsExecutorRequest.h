
@interface BWJasperColorStillsExecutorRequest : NSObject {
    <BWJasperColorStillsExecutorControllerDelegate> * _delegate;
    int  _err;
    BWJasperColorStillsExecutorInput * _input;
}

@property (nonatomic, readonly) <BWJasperColorStillsExecutorControllerDelegate> *delegate;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWJasperColorStillsExecutorInput *input;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)err;
- (id)input;
- (void)setErr:(int)arg1;

@end
