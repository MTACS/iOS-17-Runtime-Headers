
@interface WBBookmarkSyncData : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _auxiliaryRecords;
    NSDictionary * _extraPositionData;
    NSMutableDictionary * _generations;
    bool  _hasRecordExpired;
    bool  _isDeletingRecordZone;
    long long  _minimumAPIVersion;
    unsigned long long  _modifiedAttributeMask;
    CKRecordID * _parentRecordID;
    WBSCRDTPosition * _position;
    CKRecord * _record;
    CKShare * _shareRecord;
    long long  _state;
}

@property (nonatomic, readonly, copy) NSArray *auxiliaryRecordIDs;
@property (nonatomic, readonly, copy) NSData *encodedBookmarkSyncData;
@property (nonatomic) bool hasRecordExpired;
@property (nonatomic) bool isDeletingRecordZone;
@property (nonatomic) long long minimumAPIVersion;
@property (nonatomic) unsigned long long modifiedAttributeMask;
@property (nonatomic, copy) CKRecordID *parentRecordID;
@property (nonatomic, retain) WBSCRDTPosition *position;
@property (nonatomic, copy) NSDictionary *positionDictionaryRepresentation;
@property (nonatomic, copy) CKRecord *record;
@property (nonatomic, copy) CKShare *shareRecord;
@property (nonatomic) long long state;

+ (id)positionFromContentsOfData:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)syncDataWithContentsOfData:(id)arg1;

- (void).cxx_destruct;
- (id)auxiliaryRecordForKey:(id)arg1;
- (id)auxiliaryRecordIDs;
- (void)clearAllCKRecords;
- (void)clearAllGenerationsExceptState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedBookmarkSyncData;
- (void)enumerateGenerationsUsingBlock:(id /* block */)arg1;
- (id)generationForKey:(id)arg1;
- (bool)hasGenerationForKey:(id)arg1;
- (bool)hasRecordExpired;
- (void)incrementGenerationForKey:(id)arg1 withDeviceIdentifier:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDeletingRecordZone;
- (long long)minimumAPIVersion;
- (unsigned long long)modifiedAttributeMask;
- (id)parentRecordID;
- (id)position;
- (id)positionDictionaryRepresentation;
- (id)readOnlyProxy;
- (id)record;
- (void)setAuxiliaryRecord:(id)arg1 forKey:(id)arg2;
- (void)setGeneration:(id)arg1 forKey:(id)arg2;
- (void)setHasRecordExpired:(bool)arg1;
- (void)setIsDeletingRecordZone:(bool)arg1;
- (void)setMinimumAPIVersion:(long long)arg1;
- (void)setModifiedAttributeMask:(unsigned long long)arg1;
- (void)setParentRecordID:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setPositionDictionaryRepresentation:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setShareRecord:(id)arg1;
- (void)setState:(long long)arg1;
- (id)shareRecord;
- (long long)state;

@end
