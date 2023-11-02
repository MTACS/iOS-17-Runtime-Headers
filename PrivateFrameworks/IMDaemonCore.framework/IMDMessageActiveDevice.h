
@interface IMDMessageActiveDevice : NSObject {
    bool  _hasReceivedReadReceipt;
    NSString * _idsDestination;
    NSDate * _latestActiveDate;
    NSDate * _latestReadReceipt;
}

@property (nonatomic) bool hasReceivedReadReceipt;
@property (nonatomic, retain) NSString *idsDestination;
@property (nonatomic, retain) NSDate *latestActiveDate;
@property (nonatomic, retain) NSDate *latestReadReceipt;

- (void).cxx_destruct;
- (bool)_hasReceivedReadReceiptRecently;
- (id)description;
- (bool)hasReceivedReadReceipt;
- (id)idsDestination;
- (id)initWithIDSDestination:(id)arg1 latestDate:(id)arg2 latestReadReceiptDate:(id)arg3 hasReceivedReadReceipt:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)latestActiveDate;
- (id)latestReadReceipt;
- (void)setHasReceivedReadReceipt:(bool)arg1;
- (void)setIdsDestination:(id)arg1;
- (void)setLatestActiveDate:(id)arg1;
- (void)setLatestReadReceipt:(id)arg1;
- (bool)shouldDisplayAttachmentDownloadFailure;
- (bool)shouldDisplayRemoteDecryptionFailure;
- (bool)shouldSendTypingIndicator;

@end
