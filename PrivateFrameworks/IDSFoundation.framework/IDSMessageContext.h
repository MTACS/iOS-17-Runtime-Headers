
@interface IDSMessageContext : NSObject {
    double  _averageLocalRTT;
    id  _boostContext;
    long long  _broadcastID;
    NSNumber * _broadcastTime;
    NSNumber * _bytesSent;
    IDSCertifiedDeliveryContext * _certifiedDeliveryContext;
    long long  _connectionType;
    NSString * _destinationCorrelationIdentifier;
    bool  _deviceBlackedOut;
    long long  _endpointState;
    NSData * _engramGroupID;
    bool  _expectsPeerResponse;
    long long  _fileSize;
    NSString * _fromID;
    bool  _fromServerStorage;
    NSString * _incomingResponseIdentifier;
    bool  _isDirectMessage;
    bool  _isFromTrustedSender;
    long long  _localMessageState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _messageHadEncryptedData;
    NSNumber * _messageSequenceNumber;
    NSNumber * _originalCommand;
    NSString * _originalDestinationDevice;
    NSString * _originalGUID;
    NSNumber * _originalTimestamp;
    NSString * _outgoingResponseIdentifier;
    NSNumber * _priority;
    NSNumber * _publicIntentAction;
    NSDictionary * _resourceTransferMetadata;
    NSString * _resourceTransferSandboxExtension;
    NSString * _resourceTransferURLString;
    NSString * _senderCorrelationIdentifier;
    NSNumber * _serverTimestamp;
    NSString * _serviceIdentifier;
    NSString * _storageGuid;
    NSDictionary * _targettedPseudonymDict;
    NSString * _toID;
    NSNumber * _totalBytes;
    NSObject<OS_os_transaction> * _transaction;
    bool  _usedEngram;
    bool  _wantsAppAck;
    bool  _wantsManualAck;
    NSError * _wpConnectionError;
}

@property (nonatomic, readonly) double averageLocalRTT;
@property (nonatomic, retain) id boostContext;
@property (nonatomic) long long broadcastID;
@property (nonatomic, retain) NSNumber *broadcastTime;
@property (nonatomic, readonly, copy) NSNumber *bytesSent;
@property (nonatomic, readonly) IDSCertifiedDeliveryContext *certifiedDeliveryContext;
@property (nonatomic) long long connectionType;
@property (nonatomic, copy) NSString *destinationCorrelationIdentifier;
@property (nonatomic, readonly) bool deviceBlackedOut;
@property (nonatomic, readonly) long long endpointState;
@property (nonatomic, copy) NSData *engramGroupID;
@property (nonatomic) bool expectsPeerResponse;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, copy) NSString *fromID;
@property (nonatomic) bool fromServerStorage;
@property (nonatomic, copy) NSString *incomingResponseIdentifier;
@property (nonatomic) bool isDirectMessage;
@property (nonatomic, readonly) bool isFromTrustedSender;
@property (nonatomic, readonly) long long localMessageState;
@property (nonatomic) bool messageHadEncryptedData;
@property (nonatomic, readonly, copy) NSNumber *messageSequenceNumber;
@property (nonatomic, copy) NSNumber *originalCommand;
@property (nonatomic, copy) NSString *originalDestinationDevice;
@property (nonatomic, copy) NSString *originalGUID;
@property (nonatomic, copy) NSNumber *originalTimestamp;
@property (nonatomic, copy) NSString *outgoingResponseIdentifier;
@property (nonatomic, retain) NSNumber *priority;
@property (nonatomic, copy) NSNumber *publicIntentAction;
@property (nonatomic, copy) NSDictionary *resourceTransferMetadata;
@property (nonatomic, copy) NSString *resourceTransferSandboxExtension;
@property (nonatomic, copy) NSString *resourceTransferURLString;
@property (nonatomic, copy) NSString *senderCorrelationIdentifier;
@property (nonatomic, readonly) NSDate *serverReceivedTime;
@property (nonatomic, copy) NSNumber *serverTimestamp;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) NSString *storageGuid;
@property (nonatomic, readonly) IDSPseudonym *targettedPseudonym;
@property (nonatomic, copy) NSString *toID;
@property (nonatomic, readonly, copy) NSNumber *totalBytes;
@property (nonatomic) bool usedEngram;
@property (nonatomic) bool wantsAppAck;
@property (nonatomic) bool wantsManualAck;
@property (nonatomic, readonly) NSError *wpConnectionError;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (void).cxx_destruct;
- (double)averageLocalRTT;
- (id)boostContext;
- (long long)broadcastID;
- (id)broadcastTime;
- (id)bytesSent;
- (id)certifiedDeliveryContext;
- (long long)connectionType;
- (id)destinationCorrelationIdentifier;
- (bool)deviceBlackedOut;
- (long long)endpointState;
- (id)engramGroupID;
- (bool)expectsPeerResponse;
- (long long)fileSize;
- (id)fromID;
- (bool)fromServerStorage;
- (id)incomingResponseIdentifier;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
- (bool)isDirectMessage;
- (bool)isFromTrustedSender;
- (long long)localMessageState;
- (bool)messageHadEncryptedData;
- (id)messageSequenceNumber;
- (id)objectForKey:(id)arg1;
- (id)originalCommand;
- (id)originalDestinationDevice;
- (id)originalGUID;
- (id)originalTimestamp;
- (id)outgoingResponseIdentifier;
- (id)priority;
- (id)publicIntentAction;
- (id)resourceTransferMetadata;
- (id)resourceTransferSandboxExtension;
- (id)resourceTransferURLString;
- (id)senderCorrelationIdentifier;
- (id)serverReceivedTime;
- (id)serverTimestamp;
- (id)serviceIdentifier;
- (void)setBoostContext:(id)arg1;
- (void)setBroadcastID:(long long)arg1;
- (void)setBroadcastTime:(id)arg1;
- (void)setBytesSent:(id)arg1;
- (void)setConnectionType:(long long)arg1;
- (void)setDestinationCorrelationIdentifier:(id)arg1;
- (void)setEngramGroupID:(id)arg1;
- (void)setExpectsPeerResponse:(bool)arg1;
- (void)setFromID:(id)arg1;
- (void)setFromServerStorage:(bool)arg1;
- (void)setIncomingResponseIdentifier:(id)arg1;
- (void)setIsDirectMessage:(bool)arg1;
- (void)setIsFromTrustedSender:(bool)arg1;
- (void)setMessageHadEncryptedData:(bool)arg1;
- (void)setOriginalCommand:(id)arg1;
- (void)setOriginalDestinationDevice:(id)arg1;
- (void)setOriginalGUID:(id)arg1;
- (void)setOriginalGuid:(id)arg1;
- (void)setOriginalTimestamp:(id)arg1;
- (void)setOutgoingResponseIdentifier:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setPublicIntentAction:(id)arg1;
- (void)setResourceTransferMetadata:(id)arg1;
- (void)setResourceTransferSandboxExtension:(id)arg1;
- (void)setResourceTransferURLString:(id)arg1;
- (void)setSenderCorrelationIdentifier:(id)arg1;
- (void)setServerTimestamp:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setStorageGuid:(id)arg1;
- (void)setToID:(id)arg1;
- (void)setTotalBytes:(id)arg1;
- (void)setUsedEngram:(bool)arg1;
- (void)setWPConnectionError:(id)arg1;
- (void)setWantsAppAck:(bool)arg1;
- (void)setWantsManualAck:(bool)arg1;
- (id)storageGuid;
- (id)targettedPseudonym;
- (id)toID;
- (id)totalBytes;
- (bool)usedEngram;
- (bool)wantsAppAck;
- (bool)wantsManualAck;
- (id)wpConnectionError;

// Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash

- (id)nfmDescription;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkDescription;

// Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport

- (id)pbDescription;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pkDescription;

@end
