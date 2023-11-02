
@interface ContactFolderItemsSyncContext : NSObject {
    int  _abGroupChangeId;
    int  _abPersonChangeId;
    bool  _changeHistoryTruncated;
    CNChangeHistoryAnchor * _cnChangeAnchor;
    unsigned long long  _latestSequenceNumber;
}

@property (nonatomic) int abGroupChangeId;
@property (nonatomic) int abPersonChangeId;
@property (getter=isChangeHistoryTruncated, nonatomic) bool changeHistoryTruncated;
@property (nonatomic, retain) CNChangeHistoryAnchor *cnChangeAnchor;
@property (nonatomic) unsigned long long latestSequenceNumber;

- (void).cxx_destruct;
- (int)abGroupChangeId;
- (int)abPersonChangeId;
- (id)cnChangeAnchor;
- (id)init;
- (bool)isChangeHistoryTruncated;
- (unsigned long long)latestSequenceNumber;
- (void)setAbGroupChangeId:(int)arg1;
- (void)setAbPersonChangeId:(int)arg1;
- (void)setChangeHistoryTruncated:(bool)arg1;
- (void)setCnChangeAnchor:(id)arg1;
- (void)setLatestSequenceNumber:(unsigned long long)arg1;

@end
