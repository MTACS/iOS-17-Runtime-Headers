
@interface BRCFSEventToSyncUpEvent : BRCEventMetric {
    unsigned long long  _contentSize;
    unsigned long long  _fileID;
    unsigned int  _genID;
    bool  _isPackage;
    BRCItemID * _itemID;
    unsigned long long  _mtime;
    unsigned long long  _syncUpBatchSize;
}

@property (nonatomic) unsigned long long contentSize;
@property (nonatomic) unsigned long long fileID;
@property (nonatomic) unsigned int genID;
@property (nonatomic) bool isPackage;
@property (nonatomic, retain) BRCItemID *itemID;
@property (nonatomic) unsigned long long mtime;
@property (nonatomic) unsigned long long syncUpBatchSize;

- (void).cxx_destruct;
- (id)additionalPayload;
- (id)associatedAppTelemetryEvent;
- (unsigned long long)contentSize;
- (unsigned long long)fileID;
- (unsigned int)genID;
- (bool)isPackage;
- (id)itemID;
- (unsigned long long)mtime;
- (void)setContentSize:(unsigned long long)arg1;
- (void)setFileID:(unsigned long long)arg1;
- (void)setGenID:(unsigned int)arg1;
- (void)setIsPackage:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setMtime:(unsigned long long)arg1;
- (void)setSyncUpBatchSize:(unsigned long long)arg1;
- (id)subDescription;
- (unsigned long long)syncUpBatchSize;

@end
