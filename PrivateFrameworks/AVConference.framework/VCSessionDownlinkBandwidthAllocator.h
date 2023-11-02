
@interface VCSessionDownlinkBandwidthAllocator : NSObject {
    NSMutableDictionary * _allocatedMediaEntriesForClients;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _clients;
    bool  _forceFullBandwidth;
    unsigned int  _maxConcurrentVideoClients;
    struct opaqueRTCReporting { } * _reportingAgent;
    NSMutableDictionary * _selectedMediaEntriesForClients;
    NSMutableArray * _sortedMediaEntries;
}

@property (nonatomic) bool forceFullBandwidth;
@property (nonatomic, readonly) unsigned long long simultaneousTalkers;

+ (id)sortMediaEntriesGroupIds:(id)arg1;

- (void)client:(id)arg1 didActualNetworkBitrateChangeForStreamGroupID:(unsigned int)arg2;
- (void)dealloc;
- (void)deregisterForBandwidthAllocationWithClient:(id)arg1;
- (id)distributeBitrate:(unsigned int)arg1;
- (bool)forceFullBandwidth;
- (id)initWithReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (void)registerForBandwidthAllocationWithClient:(id)arg1;
- (void)reportingSessionParticipantEventBitrateChanged:(id)arg1 optedInNetworkBitrate:(unsigned int)arg2 actualNetworkBitrate:(unsigned int)arg3 optedInStreamID:(id)arg4 actualStreamID:(id)arg5;
- (unsigned int)requiredAudioBitrate:(unsigned int)arg1 highestAudioBitrates:(id)arg2;
- (void)reset;
- (void)setForceFullBandwidth:(bool)arg1;
- (unsigned long long)simultaneousTalkers;
- (void)sortMediaEntries;
- (void)updateHighestAudioBitrates:(id)arg1 bitrate:(unsigned int)arg2;
- (void)updateSelectedMediaEntriesForClientWithUUID:(id)arg1;

@end
