
@interface AVStreamDataParserInternal : NSObject {
    struct OpaqueCMBlockBuffer { } * _accumulatedInitializationData;
    NSArray * _allowableMIMETypes;
    AVAsset * _asset;
    AVWeakReference * _contentKeySession;
    int  _currentTrackID;
    AVContentKeySession * _defaultContentKeySession;
    <AVStreamDataParserOutputHandling> * _delegate;
    bool  _encounteredStreamDiscontinuity;
    NSError * _error;
    struct OpaqueFigManifold { } * _figManifold;
    AVWeakReference * _legacyStreamSession;
    bool  _preferSandboxedParsing;
    NSMutableArray * _samplesBeforeReady;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _samplesBeforeReadyTotalDuration;
    unsigned long long  _samplesBeforeReadyTotalSize;
    AVContentKeyRequest * _sessionKeyRequest;
    bool  _startedUsingInternalContentKeySession;
    long long  _status;
    NSObject<OS_dispatch_queue> * _threadSafetyQ;
    NSMutableDictionary * _trackDecryptorsByTrackID;
    NSMutableDictionary * _trackFormatDescriptionsByTrackID;
    NSMutableArray * _trackIDsNotProvidingMedia;
    NSMutableDictionary * _tracksBecomingReadyByTrackID;
    unsigned long long  _typeIdOfInitialFigManifold;
}

@end
