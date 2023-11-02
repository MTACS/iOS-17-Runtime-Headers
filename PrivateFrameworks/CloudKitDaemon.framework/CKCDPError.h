
@interface CKCDPError : PBCodable <NSCopying> {
    int  _auxiliaryCode;
    NSString * _auxiliaryDomain;
    NSMutableArray * _auxiliaryUserInfos;
    int  _code;
    struct { 
        unsigned int auxiliaryCode : 1; 
        unsigned int code : 1; 
        unsigned int targetPartition : 1; 
    }  _has;
    NSString * _message;
    int  _targetPartition;
}

@property (nonatomic) int auxiliaryCode;
@property (nonatomic, retain) NSString *auxiliaryDomain;
@property (nonatomic, retain) NSMutableArray *auxiliaryUserInfos;
@property (nonatomic) int code;
@property (nonatomic) bool hasAuxiliaryCode;
@property (nonatomic, readonly) bool hasAuxiliaryDomain;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic) bool hasTargetPartition;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) int targetPartition;

+ (Class)auxiliaryUserInfoType;

- (void).cxx_destruct;
- (int)StringAsCode:(id)arg1;
- (void)addAuxiliaryUserInfo:(id)arg1;
- (int)auxiliaryCode;
- (id)auxiliaryDomain;
- (id)auxiliaryUserInfoAtIndex:(unsigned long long)arg1;
- (id)auxiliaryUserInfos;
- (unsigned long long)auxiliaryUserInfosCount;
- (void)clearAuxiliaryUserInfos;
- (int)code;
- (id)codeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuxiliaryCode;
- (bool)hasAuxiliaryDomain;
- (bool)hasCode;
- (bool)hasMessage;
- (bool)hasTargetPartition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setAuxiliaryCode:(int)arg1;
- (void)setAuxiliaryDomain:(id)arg1;
- (void)setAuxiliaryUserInfos:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setHasAuxiliaryCode:(bool)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setHasTargetPartition:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setTargetPartition:(int)arg1;
- (int)targetPartition;
- (void)writeTo:(id)arg1;

@end
