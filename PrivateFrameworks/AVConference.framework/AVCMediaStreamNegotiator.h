
@interface AVCMediaStreamNegotiator : NSObject {
    NSData * _answer;
    NSString * _dataSessionID;
    unsigned char  _deviceRole;
    long long  _dpiFactor;
    long long  _errorDetailCode;
    NSData * _mediaBlobCompressed;
    NSData * _mediaBlobNegotiated;
    VCMediaNegotiator * _mediaNegotiator;
    long long  _mediaStreamAccessNetworkType;
    long long  _mediaStreamMode;
    long long  _mediaStreamTransportProtocolType;
    long long  _mediaStreamTransportType;
    AVCMediaStreamNegotiatorSettings * _negotiatorSettings;
    NSData * _offer;
    NSData * _remoteCallInfoBlob;
    unsigned long long  _videoHDRMode;
    long long  _videoHeight;
    long long  _videoWidth;
}

@property (nonatomic, readonly) NSData *answer;
@property (nonatomic, readonly) NSData *offer;

+ (long long)clientAccessNetworkType:(int)arg1;
+ (long long)clientCodecTypeWithCodecType:(long long)arg1;

- (void)addHDRModeSpecificSettings:(id)arg1;
- (bool)addLocalCallInfoBlobToOutgoingDictionary:(id)arg1;
- (id)answer;
- (bool)createAnswer;
- (bool)createOffer;
- (void)dealloc;
- (id)generateMediaStreamConfigurationWithError:(id*)arg1;
- (id)generateMediaStreamInitOptionsWithError:(id*)arg1;
- (bool)initNegotiatorLocalConfiguration:(id*)arg1 options:(id)arg2;
- (id)initWithMode:(long long)arg1 error:(id*)arg2;
- (id)initWithMode:(long long)arg1 options:(id)arg2 error:(id*)arg3;
- (id)initWithOffer:(id)arg1 error:(id*)arg2;
- (id)initWithOffer:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)offer;
- (void)pickBestHDRMode:(id)arg1;
- (unsigned int)pickBestPixelFormatFromSet:(id)arg1;
- (unsigned int)pickBestPixelFormatFromSet:(id)arg1 preferenceList:(unsigned int*)arg2 count:(int)arg3 acceptDefault:(bool)arg4;
- (bool)processAnswerWithError:(id*)arg1 errorReason:(id*)arg2;
- (bool)processAnswererInitOptions:(id)arg1 errorReason:(id*)arg2;
- (bool)processOfferWithError:(id*)arg1 errorReason:(id*)arg2;
- (void)processOffererInitOptions:(id)arg1 errorReason:(id*)arg2;
- (void)refreshLoggingParameters;
- (bool)setAnswer:(id)arg1 withError:(id*)arg2;
- (bool)setupAudioStreamConfiguration:(id)arg1 errorReason:(id*)arg2;
- (bool)setupVideoStreamConfiguration:(id)arg1 errorReason:(id*)arg2;
- (id)supportedPixelFormats;

@end
