
@interface SPRTransactionData : NSObject <NSSecureCoding> {
    NSData * _cardHolderData;
    NSData * _cvmResult;
    unsigned char  _cvmType;
    NSData * _ecdsaCertificate;
    unsigned char  _errorIndicationMsgOnError;
    NSData * _errorIndicationStatusWord;
    NSString * _fallbackAmount;
    bool  _forFallback;
    bool  _isPINBypassAllowed;
    bool  _isPinSupported;
    NSString * _kekId;
    NSData * _kernelIdentityKeyAttestation;
    NSData * _languagePreference;
    NSData * _merchantCategoryCode;
    NSString * _network;
    unsigned char  _outcomeStatus;
    unsigned char  _payAppletFinalStatus;
    NSString * _pinKekId;
    bool  _pinRequired;
    long long  _readError;
    bool  _switchInterfaceOrNoCVMSuccess;
    NSString * _transactionId;
    NSData * _transactionResultData;
    NSArray * _vasResponses;
}

@property (nonatomic, readonly, copy) NSData *cardHolderData;
@property (nonatomic, readonly, copy) NSData *cvmResult;
@property (nonatomic, readonly) unsigned char cvmType;
@property (nonatomic, readonly, copy) NSData *ecdsaCertificate;
@property (nonatomic, readonly) unsigned char errorIndicationMsgOnError;
@property (readonly, copy) NSData *errorIndicationStatusWord;
@property (nonatomic, readonly, copy) NSString *fallbackAmount;
@property (readonly, copy) NSData *fingerprint;
@property (nonatomic, readonly) bool forFallback;
@property (nonatomic, readonly) bool isPINBypassAllowed;
@property (nonatomic, readonly) bool isPinSupported;
@property (nonatomic, readonly, copy) NSString *kekId;
@property (nonatomic, readonly, copy) NSData *kernelIdentityKeyAttestation;
@property (nonatomic, readonly, copy) NSData *languagePreference;
@property (nonatomic, readonly, copy) NSData *merchantCategoryCode;
@property (nonatomic, readonly, copy) NSString *network;
@property (nonatomic, readonly) unsigned char outcomeStatus;
@property (nonatomic, readonly) unsigned char payAppletFinalStatus;
@property (nonatomic, readonly, copy) NSString *pinKekId;
@property (nonatomic, readonly) bool pinRequired;
@property (nonatomic, readonly) long long readError;
@property (nonatomic, readonly) bool switchInterfaceOrNoCVMSuccess;
@property (nonatomic, readonly, copy) NSString *transactionId;
@property (nonatomic, readonly, copy) NSData *transactionResultData;
@property (nonatomic, readonly, copy) NSArray *vasResponses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardHolderData;
- (id)cvmResult;
- (unsigned char)cvmType;
- (id)debugDescription;
- (id)description;
- (id)ecdsaCertificate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)errorIndicationMsgOnError;
- (id)errorIndicationStatusWord;
- (id)fallbackAmount;
- (id)fingerprint;
- (bool)forFallback;
- (id)initWithCoder:(id)arg1;
- (id)initWithVasResponses:(id)arg1 cardHolderData:(id)arg2 network:(id)arg3 outcomeStatus:(unsigned char)arg4 cvmType:(unsigned char)arg5 cvmResult:(id)arg6 merchantCategoryCode:(id)arg7 pinRequired:(bool)arg8 kernelIdentityKeyAttestation:(id)arg9 ecdsaCertificate:(id)arg10 transactionResultData:(id)arg11 kekId:(id)arg12 pinKekId:(id)arg13 isPinSupported:(bool)arg14 languagePreference:(id)arg15 transactionId:(id)arg16 readError:(long long)arg17 payAppletFinalStatus:(unsigned char)arg18;
- (id)initWithVasResponses:(id)arg1 cardHolderData:(id)arg2 network:(id)arg3 outcomeStatus:(unsigned char)arg4 cvmType:(unsigned char)arg5 cvmResult:(id)arg6 merchantCategoryCode:(id)arg7 pinRequired:(bool)arg8 kernelIdentityKeyAttestation:(id)arg9 ecdsaCertificate:(id)arg10 transactionResultData:(id)arg11 kekId:(id)arg12 pinKekId:(id)arg13 isPinSupported:(bool)arg14 languagePreference:(id)arg15 transactionId:(id)arg16 readError:(long long)arg17 payAppletFinalStatus:(unsigned char)arg18 isPINBypassAllowed:(bool)arg19 forFallback:(bool)arg20 fallbackAmount:(id)arg21;
- (id)initWithVasResponses:(id)arg1 cardHolderData:(id)arg2 network:(id)arg3 outcomeStatus:(unsigned char)arg4 errorIndicationStatusWord:(id)arg5 errorIndicationMsgOnError:(unsigned char)arg6 cvmType:(unsigned char)arg7 cvmResult:(id)arg8 merchantCategoryCode:(id)arg9 pinRequired:(bool)arg10 kernelIdentityKeyAttestation:(id)arg11 ecdsaCertificate:(id)arg12 transactionResultData:(id)arg13 kekId:(id)arg14 pinKekId:(id)arg15 isPinSupported:(bool)arg16 languagePreference:(id)arg17 transactionId:(id)arg18 readError:(long long)arg19 payAppletFinalStatus:(unsigned char)arg20 isPINBypassAllowed:(bool)arg21 forFallback:(bool)arg22 fallbackAmount:(id)arg23;
- (id)initWithVasResponses:(id)arg1 cardHolderData:(id)arg2 network:(id)arg3 outcomeStatus:(unsigned char)arg4 errorIndicationStatusWord:(id)arg5 errorIndicationMsgOnError:(unsigned char)arg6 cvmType:(unsigned char)arg7 cvmResult:(id)arg8 merchantCategoryCode:(id)arg9 pinRequired:(bool)arg10 kernelIdentityKeyAttestation:(id)arg11 ecdsaCertificate:(id)arg12 transactionResultData:(id)arg13 kekId:(id)arg14 pinKekId:(id)arg15 isPinSupported:(bool)arg16 languagePreference:(id)arg17 transactionId:(id)arg18 readError:(long long)arg19 payAppletFinalStatus:(unsigned char)arg20 isPINBypassAllowed:(bool)arg21 forFallback:(bool)arg22 fallbackAmount:(id)arg23 switchInterfaceOrNoCVMSuccess:(bool)arg24;
- (bool)isPINBypassAllowed;
- (bool)isPinSupported;
- (id)kekId;
- (id)kernelIdentityKeyAttestation;
- (id)languagePreference;
- (id)merchantCategoryCode;
- (id)network;
- (unsigned char)outcomeStatus;
- (unsigned char)payAppletFinalStatus;
- (id)pinKekId;
- (bool)pinRequired;
- (long long)readError;
- (bool)switchInterfaceOrNoCVMSuccess;
- (id)transactionId;
- (id)transactionResultData;
- (id)vasResponses;

@end