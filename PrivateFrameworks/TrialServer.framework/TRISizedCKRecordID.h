
@interface TRISizedCKRecordID : NSObject <NSCopying> {
    unsigned long long  _downloadSize;
    CKRecordID * _recordId;
}

@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly) CKRecordID *recordId;

+ (id)recordIDWithRecordId:(id)arg1 downloadSize:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementDownloadSize:(unsigned long long)arg1;
- (id)copyWithReplacementRecordId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)downloadSize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRecordId:(id)arg1 downloadSize:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecordID:(id)arg1;
- (id)recordId;

@end
