
@interface BWSoftISPProcessorControllerRequest : BWStillImageProcessorControllerRequest {
    struct opaqueCMSampleBuffer { } * _outputFrame;
    unsigned long long  _uniqueID;
}

@property (nonatomic, retain) struct opaqueCMSampleBuffer { }*outputFrame;
@property (nonatomic, readonly) unsigned long long uniqueID;

- (void)dealloc;
- (id)description;
- (id)initWithInput:(id)arg1 delegate:(id)arg2;
- (struct opaqueCMSampleBuffer { }*)outputFrame;
- (unsigned long long)outputType;
- (bool)readyForProcessing;
- (void)setOutputFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (unsigned long long)uniqueID;

@end
