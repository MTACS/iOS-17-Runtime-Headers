
@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying> {
    int  _databaseType;
    struct { 
        unsigned int databaseType : 1; 
    }  _has;
    CKDPIdentifier * _ownerIdentifier;
    CKDPIdentifier * _value;
}

@property (nonatomic) int databaseType;
@property (nonatomic) bool hasDatabaseType;
@property (nonatomic, readonly) bool hasOwnerIdentifier;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) CKDPIdentifier *ownerIdentifier;
@property (nonatomic, retain) CKDPIdentifier *value;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (int)StringAsDatabaseType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)databaseType;
- (id)databaseTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDatabaseType;
- (bool)hasOwnerIdentifier;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)ownerIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setDatabaseType:(int)arg1;
- (void)setHasDatabaseType:(bool)arg1;
- (void)setOwnerIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
