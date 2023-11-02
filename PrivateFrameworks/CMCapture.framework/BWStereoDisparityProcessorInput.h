
@interface BWStereoDisparityProcessorInput : BWStillImageProcessorControllerInput {
    struct opaqueCMSampleBuffer { } * _auxiliarySbuf;
    <BWStereoDisparityProcessorInputDelegate> * _delegate;
    bool  _emitAuxiliaryInput;
    bool  _equalizeTeleGainToMatchReference;
    NSSet * _expectedPortTypes;
    struct opaqueCMSampleBuffer { } * _referenceSbuf;
}

@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*auxiliarySbuf;
@property (nonatomic, retain) <BWStereoDisparityProcessorInputDelegate> *delegate;
@property (nonatomic) bool emitAuxiliaryInput;
@property (nonatomic) bool equalizeTeleGainToMatchReference;
@property (nonatomic, retain) NSSet *expectedPortTypes;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*referenceSbuf;

- (void)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct opaqueCMSampleBuffer { }*)auxiliarySbuf;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)emitAuxiliaryInput;
- (bool)equalizeTeleGainToMatchReference;
- (id)expectedPortTypes;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
- (struct opaqueCMSampleBuffer { }*)referenceSbuf;
- (void)setDelegate:(id)arg1;
- (void)setEmitAuxiliaryInput:(bool)arg1;
- (void)setEqualizeTeleGainToMatchReference:(bool)arg1;
- (void)setExpectedPortTypes:(id)arg1;

@end
