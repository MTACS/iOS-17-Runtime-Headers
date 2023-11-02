
@interface AppleTypeCRetimerFirmwareAggregateRequestCreatorOS : AppleTypeCRetimerRestoreInfoHelperOS {
    NSDictionary * _apParameters;
    NSArray * _deviceInfoArray;
    FTABFileOS * _ftab;
    NSDictionary * _requestDictionary;
    FTABSubfileOS * _rkos;
    FTABSubfileOS * _rrko;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (id)generateHashForSubfile:(id)arg1;
- (bool)generateRequestDictionary;
- (id)initWithOptions:(id)arg1 logFunction:(int (*)arg2 logContext:(void*)arg3;
- (bool)parseOptions:(id)arg1;
- (id)requestDictionary;

@end
