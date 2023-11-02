
@interface _IDSDatagramChannel : NSObject {
    NSMutableDictionary * _MKIArrivalTime;
    IDSDataChannelLinkContext * _cellularLink;
    bool  _connected;
    NSObject<OS_nw_connection> * _connection;
    NSObject<OS_nw_context> * _context;
    BOOL  _defaultLinkID;
    IDSDataChannelsDirectConnections * _directConnectionsByLinkID;
    id /* block */  _eventHandler;
    NSMutableDictionary * _firstPacketArrivalTimeForMKI;
    bool  _hasMetadata;
    unsigned long long  _incomingBytes;
    unsigned long long  _incomingPackets;
    bool  _isInvalidated;
    double  _lastIncomingStatReport;
    double  _lastOutgoingStatReport;
    NSMutableDictionary * _linkContexts;
    IDSDataChannelLinkContext * _linkContextsByLinkID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _linkContextsLock;
    NSMutableDictionary * _linkIDToParticipantMap;
    NSMutableDictionary * _localRemoteRelayLinkIDToVirtualLinkIDMap;
    bool  _needsMediaEncryptionInfo;
    unsigned char  _nexus_instance;
    long long  _operationMode;
    struct channel { } * _osChannel;
    int  _osChannelFD;
    struct channel_ring_desc { } * _osChannelRXRing;
    struct channel_ring_desc { } * _osChannelTXRing;
    unsigned long long  _outgoingBytes;
    unsigned long long  _outgoingPackets;
    NSObject<OS_nw_path_evaluator> * _pathEvaluator;
    NSData * _preConnectionData;
    long long  _preferredDataPathType;
    NSMutableDictionary * _probingDict;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _readHandler;
    id /* block */  _readHandlerWithOptions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readLock;
    bool  _receivedPreConnectionData;
    NSMutableArray * _sendingMetadata;
    bool  _sentFirstReadLinkInfo;
    int  _socketDescriptor;
    bool  _startAutomatically;
    bool  _startCalled;
    bool  _verboseFunctionalLogging;
    bool  _waitForPreConnectionDataForConnected;
    id /* block */  _writeHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _writeLock;
}

- (void).cxx_destruct;
- (id)init;

@end
