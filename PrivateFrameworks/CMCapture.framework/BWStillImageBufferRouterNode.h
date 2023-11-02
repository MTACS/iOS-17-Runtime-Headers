
@interface BWStillImageBufferRouterNode : BWNode {
    bool  _GNRSISSupported;
    BWNodeOutput * _HDROutput;
    bool  _HDRSupported;
    bool  _LTMHDRSupported;
    BWNodeOutput * _SISOutput;
    bool  _SISSupported;
    BWNodeOutput * _bravoTelephotoOutput;
    BWNodeOutput * _defaultOutput;
    NSArray * _inputPortTypes;
    BWNodeOutput * _pearlInfraredOutput;
    NSDictionary * _portTypeToInput;
    bool  _usingBravoDevice;
    bool  _usingPearlDevice;
}

@property (nonatomic, readonly) BWNodeOutput *HDROutput;
@property (nonatomic, readonly) BWNodeOutput *SISOutput;
@property (nonatomic, readonly) BWNodeOutput *bravoTelephotoOutput;
@property (nonatomic, readonly) BWNodeOutput *defaultOutput;
@property (nonatomic, readonly) BWNodeOutput *pearlInfraredOutput;

+ (void)initialize;

- (id)HDROutput;
- (id)SISOutput;
- (id)bravoTelephotoOutput;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)defaultOutput;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)initWithInputPortTypes:(id)arg1 HDRSupported:(bool)arg2 SISSupported:(bool)arg3 GNRSISSupported:(bool)arg4 LTMHDRSupported:(bool)arg5 depthDataDeliveryEnabled:(bool)arg6;
- (id)inputForPortType:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (id)pearlInfraredOutput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
