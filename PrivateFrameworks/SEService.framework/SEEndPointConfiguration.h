
@interface SEEndPointConfiguration : NSObject <NSSecureCoding> {
    bool  _authorizeEndPointAllowed;
    bool  _authorizeEndPointWithAuthorizeAllowed;
    bool  _confidentialDataAllowed;
    bool  _enabledOnContactless;
    bool  _enabledOnWire;
    bool  _exchangeAllowedInFastFlow;
    bool  _exchangeAllowedOnWire;
    bool  _exportEraseConfidentialMailBox;
    bool  _fastFlowAllowedOnContactless;
    bool  _fastFlowAllowedOnWire;
    unsigned short  _lengthConfidentialMailBox;
    unsigned short  _lengthPrivateMailBox;
    bool  _nfcExpressOnlyInLPM;
    unsigned short  _offsetConfidentialMailBox;
    unsigned short  _offsetPrivateMailBox;
    bool  _signAllowed;
    bool  _standardFlowAllowedOnContactless;
    bool  _standardFlowAllowedOnWire;
    bool  _terminationNotPersisted;
}

@property bool authorizeEndPointAllowed;
@property bool authorizeEndPointWithAuthorizeAllowed;
@property bool confidentialDataAllowed;
@property bool enabledOnContactless;
@property bool enabledOnWire;
@property bool exchangeAllowedInFastFlow;
@property bool exchangeAllowedOnWire;
@property bool exportEraseConfidentialMailBox;
@property bool fastFlowAllowedOnContactless;
@property bool fastFlowAllowedOnWire;
@property unsigned short lengthConfidentialMailBox;
@property unsigned short lengthPrivateMailBox;
@property bool nfcExpressOnlyInLPM;
@property unsigned short offsetConfidentialMailBox;
@property unsigned short offsetPrivateMailBox;
@property bool signAllowed;
@property bool standardFlowAllowedOnContactless;
@property bool standardFlowAllowedOnWire;
@property bool terminationNotPersisted;

+ (id)configurationWithOpt1:(unsigned char)arg1 opt2:(unsigned char)arg2;
+ (id)homeDefaults;
+ (id)hydraDefaults;
+ (bool)supportsSecureCoding;

- (bool)authorizeEndPointAllowed;
- (bool)authorizeEndPointWithAuthorizeAllowed;
- (bool)confidentialDataAllowed;
- (id)description;
- (bool)enabledOnContactless;
- (bool)enabledOnWire;
- (void)encodeWithCoder:(id)arg1;
- (bool)exchangeAllowedInFastFlow;
- (bool)exchangeAllowedOnWire;
- (bool)exportEraseConfidentialMailBox;
- (bool)fastFlowAllowedOnContactless;
- (bool)fastFlowAllowedOnWire;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned short)lengthConfidentialMailBox;
- (unsigned short)lengthPrivateMailBox;
- (bool)nfcExpressOnlyInLPM;
- (unsigned short)offsetConfidentialMailBox;
- (unsigned short)offsetPrivateMailBox;
- (unsigned char)opt1;
- (unsigned char)opt2;
- (unsigned char)optA;
- (void)setAuthorizeEndPointAllowed:(bool)arg1;
- (void)setAuthorizeEndPointWithAuthorizeAllowed:(bool)arg1;
- (void)setConfidentialDataAllowed:(bool)arg1;
- (void)setEnabledOnContactless:(bool)arg1;
- (void)setEnabledOnWire:(bool)arg1;
- (void)setExchangeAllowedInFastFlow:(bool)arg1;
- (void)setExchangeAllowedOnWire:(bool)arg1;
- (void)setExportEraseConfidentialMailBox:(bool)arg1;
- (void)setFastFlowAllowedOnContactless:(bool)arg1;
- (void)setFastFlowAllowedOnWire:(bool)arg1;
- (void)setLengthConfidentialMailBox:(unsigned short)arg1;
- (void)setLengthPrivateMailBox:(unsigned short)arg1;
- (void)setNfcExpressOnlyInLPM:(bool)arg1;
- (void)setOffsetConfidentialMailBox:(unsigned short)arg1;
- (void)setOffsetPrivateMailBox:(unsigned short)arg1;
- (void)setSignAllowed:(bool)arg1;
- (void)setStandardFlowAllowedOnContactless:(bool)arg1;
- (void)setStandardFlowAllowedOnWire:(bool)arg1;
- (void)setTerminationNotPersisted:(bool)arg1;
- (bool)signAllowed;
- (bool)standardFlowAllowedOnContactless;
- (bool)standardFlowAllowedOnWire;
- (bool)terminationNotPersisted;

@end
