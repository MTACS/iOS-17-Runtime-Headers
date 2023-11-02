
@interface HDCodableSource : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    bool  _deleted;
    struct { 
        unsigned int modificationDate : 1; 
        unsigned int options : 1; 
        unsigned int deleted : 1; 
    }  _has;
    double  _modificationDate;
    NSString * _name;
    long long  _options;
    NSString * _owningAppBundleIdentifier;
    NSString * _productType;
    HDCodableSyncIdentity * _syncIdentity;
    NSData * _uuid;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) bool deleted;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic) bool hasDeleted;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasOptions;
@property (nonatomic, readonly) bool hasOwningAppBundleIdentifier;
@property (nonatomic, readonly) bool hasProductType;
@property (nonatomic, readonly) bool hasSyncIdentity;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) double modificationDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long options;
@property (nonatomic, retain) NSString *owningAppBundleIdentifier;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedModificationDate;
- (id)decodedUUID;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasDeleted;
- (bool)hasModificationDate;
- (bool)hasName;
- (bool)hasOptions;
- (bool)hasOwningAppBundleIdentifier;
- (bool)hasProductType;
- (bool)hasSyncIdentity;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (id)name;
- (long long)options;
- (id)owningAppBundleIdentifier;
- (id)productType;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasOptions:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setOwningAppBundleIdentifier:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSyncIdentity:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)syncIdentity;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
