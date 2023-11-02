
@interface HFSetupAccessoryResult : NSObject {
    NSError * _error;
    bool  _hasAddRequest;
    bool  _isValidForPairing;
    HMSetupAccessoryPayload * _setupPayload;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool hasAddRequest;
@property (nonatomic, readonly) bool isValidForPairing;
@property (nonatomic, readonly) HMSetupAccessoryPayload *setupPayload;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (bool)hasAddRequest;
- (id)initWithPayload:(id)arg1;
- (id)initWithPayload:(id)arg1 error:(id)arg2 hasAddRequest:(bool)arg3;
- (id)initWithPayload:(id)arg1 hasAddRequest:(bool)arg2;
- (id)initWithSetupCode:(id)arg1;
- (id)initWithSetupURL:(id)arg1;
- (bool)isAllZerosCode;
- (bool)isValidForPairing;
- (id)setupPayload;

@end
