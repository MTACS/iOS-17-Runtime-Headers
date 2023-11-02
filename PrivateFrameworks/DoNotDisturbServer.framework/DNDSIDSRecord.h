
@interface DNDSIDSRecord : NSObject <DNDSBackingStoreRecord> {
    NSMutableDictionary * _data;
    DNDSIDSRecordMetadata * _metadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastModified;
@property (nonatomic, readonly, copy) DNDSIDSRecordMetadata *metadata;
@property (nonatomic, readonly, copy) DNDSIDSRecordID *recordID;
@property (readonly) Class superclass;

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithMetadata:(id)arg1 data:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMetadata:(id)arg1;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (id)lastModified;
- (id)metadata;
- (id)objectForKey:(id)arg1;
- (id)recordID;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
