
@interface OTApplicantToSponsorRound2M1 : PBCodable <NSCopying> {
    NSString * _peerID;
    NSData * _permanentInfo;
    NSData * _permanentInfoSig;
    NSData * _stableInfo;
    NSData * _stableInfoSig;
}

@property (nonatomic, readonly) bool hasPeerID;
@property (nonatomic, readonly) bool hasPermanentInfo;
@property (nonatomic, readonly) bool hasPermanentInfoSig;
@property (nonatomic, readonly) bool hasStableInfo;
@property (nonatomic, readonly) bool hasStableInfoSig;
@property (nonatomic, retain) NSString *peerID;
@property (nonatomic, retain) NSData *permanentInfo;
@property (nonatomic, retain) NSData *permanentInfoSig;
@property (nonatomic, retain) NSData *stableInfo;
@property (nonatomic, retain) NSData *stableInfoSig;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPeerID;
- (bool)hasPermanentInfo;
- (bool)hasPermanentInfoSig;
- (bool)hasStableInfo;
- (bool)hasStableInfoSig;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerID;
- (id)permanentInfo;
- (id)permanentInfoSig;
- (bool)readFrom:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setPermanentInfo:(id)arg1;
- (void)setPermanentInfoSig:(id)arg1;
- (void)setStableInfo:(id)arg1;
- (void)setStableInfoSig:(id)arg1;
- (id)stableInfo;
- (id)stableInfoSig;
- (void)writeTo:(id)arg1;

@end
