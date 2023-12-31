
@interface FudPersonalizationRequest : NSObject <NSSecureCoding> {
    unsigned int  _boardID;
    bool  _cepoSet;
    unsigned int  _chipEpoch;
    unsigned int  _chipID;
    bool  _cproSet;
    bool  _csecSet;
    unsigned long long  _ecID;
    bool  _enableMixMatch;
    NSData * _extEcID;
    bool  _globalSigning;
    NSData * _nonceHash;
    NSArray * _objectList;
    NSData * _payload;
    bool  _productionMode;
    NSString * _requestName;
    NSString * _requestPrefix;
    unsigned short  _responseAlignment;
    int  _responseFormat;
    unsigned int  _securityDomain;
    bool  _securityMode;
    bool  _useSSOCredentials;
}

@property (nonatomic) unsigned int boardID;
@property (nonatomic) unsigned int chipEpoch;
@property (nonatomic) unsigned int chipID;
@property (nonatomic) unsigned long long ecID;
@property (nonatomic) bool enableMixMatch;
@property (nonatomic, retain) NSData *extEcID;
@property (nonatomic) bool globalSigning;
@property (nonatomic, retain) NSData *nonceHash;
@property (nonatomic, retain) NSArray *objectList;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) bool productionMode;
@property (nonatomic, readonly, copy) NSString *requestName;
@property (nonatomic, retain) NSString *requestPrefix;
@property (nonatomic) unsigned short responseAlignment;
@property (nonatomic) int responseFormat;
@property (nonatomic) unsigned int securityDomain;
@property (nonatomic) bool securityMode;

+ (bool)supportsSecureCoding;

- (unsigned int)boardID;
- (unsigned int)chipEpoch;
- (unsigned int)chipID;
- (void)dealloc;
- (unsigned long long)ecID;
- (bool)enableMixMatch;
- (void)encodeWithCoder:(id)arg1;
- (id)extEcID;
- (bool)globalSigning;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isChipEpochSet;
- (bool)isProductionModeSet;
- (bool)isSecurityModeSet;
- (id)nonceHash;
- (id)objectList;
- (id)payload;
- (bool)productionMode;
- (id)requestName;
- (id)requestPrefix;
- (unsigned short)responseAlignment;
- (int)responseFormat;
- (unsigned int)securityDomain;
- (bool)securityMode;
- (void)setBoardID:(unsigned int)arg1;
- (void)setChipEpoch:(unsigned int)arg1;
- (void)setChipID:(unsigned int)arg1;
- (void)setEcID:(unsigned long long)arg1;
- (void)setEnableMixMatch:(bool)arg1;
- (void)setExtEcID:(id)arg1;
- (void)setGlobalSigning:(bool)arg1;
- (void)setNonceHash:(id)arg1;
- (void)setObjectList:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setProductionMode:(bool)arg1;
- (void)setRequestPrefix:(id)arg1;
- (void)setResponseAlignment:(unsigned short)arg1;
- (void)setResponseFormat:(int)arg1;
- (void)setSecurityDomain:(unsigned int)arg1;
- (void)setSecurityMode:(bool)arg1;
- (void)setUseSSOCredentials:(bool)arg1;
- (bool)useSSOCredentials;

@end
