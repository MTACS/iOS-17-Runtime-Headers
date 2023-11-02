
@interface HDCodableContributor : PBCodable <NSCopying> {
    NSString * _appleID;
    NSString * _callerID;
    bool  _deleted;
    struct { 
        unsigned int modificationDate : 1; 
        unsigned int deleted : 1; 
    }  _has;
    double  _modificationDate;
    HDCodableSyncIdentity * _syncIdentity;
    NSData * _uuid;
}

@property (nonatomic, retain) NSString *appleID;
@property (nonatomic, retain) NSString *callerID;
@property (nonatomic) bool deleted;
@property (nonatomic, readonly) bool hasAppleID;
@property (nonatomic, readonly) bool hasCallerID;
@property (nonatomic) bool hasDeleted;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (id)appleID;
- (id)callerID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppleID;
- (bool)hasCallerID;
- (bool)hasDeleted;
- (bool)hasModificationDate;
- (bool)hasSyncIdentity;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (bool)readFrom:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setCallerID:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)syncIdentity;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
