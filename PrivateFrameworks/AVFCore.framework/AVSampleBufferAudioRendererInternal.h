
@interface AVSampleBufferAudioRendererInternal : NSObject {
    unsigned long long  allowedAudioSpatializationFormats;
    NSString * audioOutputDeviceUniqueID;
    struct opaqueMTAudioProcessingTap { } * audioProcessingTap;
    AVAudioSession * audioSession;
    NSString * audioTimePitchAlgorithm;
    NSError * error;
    struct OpaqueFigSampleBufferAudioRenderer { } * figAudioRenderer;
    struct OpaqueFigCPECryptor { } * lastCryptor;
    struct opaqueCMFormatDescription { } * lastFormatDescription;
    <AVLoggingIdentifier> * loggingIdentifier;
    struct { 
        struct OpaqueFigSimpleMutex {} *mutex; 
        AVMediaDataRequester *requester; 
    }  mediaDataRequester;
    bool  muted;
    AVOutputContext * outputContext;
    float  rate;
    struct OpaqueCMTimebase { } * readOnlyControlTimebase;
    AVScheduledAudioParameters * scheduledAudioParameters;
    long long  status;
    float  volume;
    AVContentKeySession * weakContentKeySession;
    AVWeakReference * weakReferenceToSelf;
    AVWeakReference * weakReferenceToSynchronizer;
}

- (void).cxx_destruct;

@end
