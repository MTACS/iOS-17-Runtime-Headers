
@interface BRFieldStructureSignature : PBCodable <BRFieldVersionSignature, NSCopying> {
    NSString * _oldVersionIdentifier;
    NSString * _versionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasOldVersionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *oldVersionIdentifier;
@property (nonatomic, retain) NSString *oldVersionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *versionIdentifier;
@property (nonatomic, retain) NSString *versionIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasOldVersionIdentifier;
- (unsigned long long)hash;
- (id)initWithLocalStatInfo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToSignature:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)oldVersionIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setOldVersionIdentifier:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (id)versionIdentifier;
- (void)writeTo:(id)arg1;

@end
