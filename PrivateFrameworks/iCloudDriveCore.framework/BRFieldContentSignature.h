
@interface BRFieldContentSignature : PBCodable <BRFieldVersionSignature, NSCopying> {
    NSData * _contentSignature;
    struct { 
        unsigned int size : 1; 
    }  _has;
    NSString * _oldVersionIdentifier;
    long long  _size;
    NSString * _versionIdentifier;
}

@property (nonatomic, retain) NSData *contentSignature;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContentSignature;
@property (nonatomic, readonly) bool hasOldVersionIdentifier;
@property (nonatomic) bool hasSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *oldVersionIdentifier;
@property (nonatomic, retain) NSString *oldVersionIdentifier;
@property (nonatomic) long long size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *versionIdentifier;
@property (nonatomic, retain) NSString *versionIdentifier;

- (void).cxx_destruct;
- (unsigned long long)_localEditCounter;
- (id)_oldVersionEtag;
- (unsigned long long)_oldVersionLocalEditCounter;
- (bool)containsLocalEdits;
- (bool)contentDiffersWithSignature:(id)arg1;
- (id)contentSignature;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasContentSignature;
- (bool)hasOldVersionIdentifier;
- (bool)hasOnlyLocalEditsOnTopOfSignature:(id)arg1;
- (bool)hasPopulatedVersionAndSignature;
- (bool)hasSize;
- (unsigned long long)hash;
- (id)initWithLocalVersion:(id)arg1;
- (id)initWithLoserEtag:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToSignature:(id)arg1;
- (bool)isPackage;
- (bool)isPendingSignature;
- (void)mergeFrom:(id)arg1;
- (id)oldVersionIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setContentSignature:(id)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setOldVersionIdentifier:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (long long)size;
- (id)versionIdentifier;
- (void)writeTo:(id)arg1;

@end
