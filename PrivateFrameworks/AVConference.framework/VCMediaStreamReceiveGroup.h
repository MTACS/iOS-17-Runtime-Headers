
@interface VCMediaStreamReceiveGroup : VCMediaStreamGroup <VCMediaStreamDelegate> {
    NSNumber * _activeStreamID;
    NSNumber * _optedInStreamID;
    bool  _receivingEndToEndStream;
    NSMutableDictionary * _streamToActualNetworkBitrate;
    NSMutableDictionary * _streamToMaxNetworkBitrate;
}

@property (nonatomic, retain) NSNumber *activeStreamID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *optedInStreamID;
@property (readonly) Class superclass;

- (id)activeStreamID;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;
- (void)notifyChangeInActiveMediaBitrateTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (id)optedInStreamID;
- (void)setActiveStreamID:(id)arg1;
- (void)setActiveStreamIDs:(id)arg1;
- (void)setActualBitrateForOptedInStreamWithActiveStreamID:(id)arg1;
- (void)setupMaxBitrateMap;
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;
- (void)vcMediaStreamDidDecryptionTimeOutForMKMRecovery:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;

@end
