
@interface DNDSIDSRecordID : NSObject <DNDSBackingStoreRecord, NSCopying> {
    NSString * _identifier;
    NSString * _zone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *zone;

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithRecordID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 zone:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)zone;

@end
