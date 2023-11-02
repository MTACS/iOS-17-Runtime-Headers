
@interface DNDSMutableIDSRecordMetadata : DNDSIDSRecordMetadata

@property (getter=isDeleted, nonatomic) bool deleted;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic, copy) DNDSIDSRecordID *recordID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setLastModified:(id)arg1;
- (void)setRecordID:(id)arg1;

@end
