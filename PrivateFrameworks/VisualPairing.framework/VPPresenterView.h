
@interface VPPresenterView : UIView {
    unsigned int  _flags;
    AVPlayer * _moviePlayer;
    bool  _started;
    NSString * _verificationCode;
    CALayer * _watermarkLayer;
    NSArray * _watermarkPixelBuffers;
    unsigned long long  _watermarkStepIndex;
    NSObject<OS_dispatch_source> * _watermarkStepTimer;
}

@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) NSString *verificationCode;

- (void).cxx_destruct;
- (void)_watermarkStep;
- (unsigned int)flags;
- (void)layoutSubviews;
- (void)setFlags:(unsigned int)arg1;
- (void)setVerificationCode:(id)arg1;
- (void)start;
- (void)stop;
- (id)verificationCode;

@end
