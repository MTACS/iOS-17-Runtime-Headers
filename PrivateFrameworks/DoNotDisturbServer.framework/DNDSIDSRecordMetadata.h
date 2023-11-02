
@interface DNDSIDSRecordMetadata : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    bool  _deleted;
    NSDate * _lastModified;
    DNDSIDSRecordID * _recordID;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastModified;
@property (nonatomic, readonly, copy) DNDSIDSRecordID *recordID;
@property (readonly) Class superclass;

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithRecordMetadata:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRecordID:(id)arg1 lastModified:(id)arg2 deleted:(bool)arg3;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (id)lastModified;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)recordID;

@end
