
@interface MRAirPlayTransportConnection : MRExternalDeviceTransportConnection <AVOutputDeviceCommunicationChannelDelegate> {
    APReceiverMediaRemoteCommunicationChannel * _apCommunicationChannel;
    bool  _channelClosed;
    NSDate * _dateCreated;
    NSDate * _mostRecentMessageReceivedDate;
    NSDate * _mostRecentMessageSentDate;
    AVOutputContextCommunicationChannel * _outputContextCommunicationChannel;
    AVOutputDeviceCommunicationChannel * _outputDeviceCommunicationChannel;
    unsigned long long  _totalBytesReceivedCount;
    unsigned long long  _totalBytesSentCount;
    unsigned long long  _totalMessagesReceivedCount;
    unsigned long long  _totalMessagesSentCount;
    MROSTransaction * _transaction;
}

@property (nonatomic, readonly) APReceiverMediaRemoteCommunicationChannel *apCommunicationChannel;
@property (nonatomic) bool channelClosed;
@property (nonatomic, retain) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id effectiveChannel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *mostRecentMessageReceivedDate;
@property (nonatomic, retain) NSDate *mostRecentMessageSentDate;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *outputContextCommunicationChannel;
@property (nonatomic, readonly) AVOutputDeviceCommunicationChannel *outputDeviceCommunicationChannel;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long totalBytesReceivedCount;
@property (nonatomic) unsigned long long totalBytesSentCount;
@property (nonatomic) unsigned long long totalMessagesReceivedCount;
@property (nonatomic) unsigned long long totalMessagesSentCount;
@property (nonatomic, retain) MROSTransaction *transaction;

- (void).cxx_destruct;
- (id)_init;
- (unsigned long long)_sendTransportData:(id)arg1;
- (id)apCommunicationChannel;
- (bool)channelClosed;
- (void)closeWithError:(id)arg1;
- (void)communicationChannel:(id)arg1 didReceiveData:(id)arg2;
- (void)communicationChannelDidClose:(id)arg1;
- (id)dateCreated;
- (id)debugDescription;
- (id)description;
- (id)effectiveChannel;
- (void)ingestData:(id)arg1;
- (id)initWithAPCommunicationChannel:(id)arg1;
- (id)initWithOutputContextCommunicationChannel:(id)arg1 outputContext:(id)arg2;
- (id)initWithOutputDeviceCommunicationChannel:(id)arg1;
- (bool)isValid;
- (id)mostRecentMessageReceivedDate;
- (id)mostRecentMessageSentDate;
- (id)outputContextCommunicationChannel;
- (id)outputDeviceCommunicationChannel;
- (unsigned long long)sendTransportData:(id)arg1 options:(id)arg2;
- (void)setChannelClosed:(bool)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setMostRecentMessageReceivedDate:(id)arg1;
- (void)setMostRecentMessageSentDate:(id)arg1;
- (void)setTotalBytesReceivedCount:(unsigned long long)arg1;
- (void)setTotalBytesSentCount:(unsigned long long)arg1;
- (void)setTotalMessagesReceivedCount:(unsigned long long)arg1;
- (void)setTotalMessagesSentCount:(unsigned long long)arg1;
- (void)setTransaction:(id)arg1;
- (unsigned long long)totalBytesReceivedCount;
- (unsigned long long)totalBytesSentCount;
- (unsigned long long)totalMessagesReceivedCount;
- (unsigned long long)totalMessagesSentCount;
- (id)transaction;

@end
