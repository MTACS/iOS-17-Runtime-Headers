
@interface AppleTypeCRetimerFirmwareRequestCreatorOS : AppleTypeCRetimerRestoreInfoHelperOS {
    unsigned short  _boardID;
    unsigned short  _chipID;
    unsigned char  _chipRev;
    unsigned long long  _ecid;
    FTABFileOS * _ftab;
    NSData * _nonce;
    unsigned char  _productionStatus;
    NSDictionary * _requestDictionary;
    FTABSubfileOS * _rkos;
    FTABSubfileOS * _rrko;
    unsigned char  _securityDomain;
    unsigned char  _securityEpoch;
    unsigned char  _securityMode;
    unsigned char  _tagNumber;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (id)generateHashForSubfile:(id)arg1;
- (void)generateRequestDictionary;
- (id)initWithOptions:(id)arg1 logFunction:(int (*)arg2 logContext:(void*)arg3;
- (bool)parseOptions:(id)arg1;
- (id)requestDictionary;

@end
