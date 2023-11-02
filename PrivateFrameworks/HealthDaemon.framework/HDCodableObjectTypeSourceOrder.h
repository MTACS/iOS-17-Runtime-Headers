
@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying> {
    struct { 
        unsigned int objectType : 1; 
        unsigned int userOrdered : 1; 
    }  _has;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _modificationDates;
    long long  _objectType;
    NSData * _sourceUUIDs;
    HDCodableSyncIdentity * _syncIdentity;
    bool  _userOrdered;
}

@property (nonatomic) bool hasObjectType;
@property (nonatomic, readonly) bool hasSourceUUIDs;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic) bool hasUserOrdered;
@property (nonatomic, readonly) double*modificationDates;
@property (nonatomic, readonly) unsigned long long modificationDatesCount;
@property (nonatomic) long long objectType;
@property (nonatomic, retain) NSData *sourceUUIDs;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic) bool userOrdered;

- (void).cxx_destruct;
- (void)addModificationDates:(double)arg1;
- (void)clearModificationDates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)decodedDataTypeCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasObjectType;
- (bool)hasSourceUUIDs;
- (bool)hasSyncIdentity;
- (bool)hasUserOrdered;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double*)modificationDates;
- (double)modificationDatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)modificationDatesCount;
- (long long)objectType;
- (bool)readFrom:(id)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setHasUserOrdered:(bool)arg1;
- (void)setModificationDates:(double*)arg1 count:(unsigned long long)arg2;
- (void)setObjectType:(long long)arg1;
- (void)setSourceUUIDs:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setUserOrdered:(bool)arg1;
- (id)sourceUUIDs;
- (id)syncIdentity;
- (bool)userOrdered;
- (void)writeTo:(id)arg1;

@end
