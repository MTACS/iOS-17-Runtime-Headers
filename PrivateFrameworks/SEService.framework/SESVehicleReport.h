
@interface SESVehicleReport : NSObject <NSSecureCoding> {
    NSArray * _functionsInProgress;
    NSString * _keyIdentifier;
    NSDictionary * _proprietaryData;
    NSString * _readerIdentifier;
    NSDictionary * _status;
    NSArray * _supportedFunctions;
}

@property (nonatomic, retain) NSArray *functionsInProgress;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (nonatomic, retain) NSDictionary *proprietaryData;
@property (nonatomic, readonly) NSString *readerIdentifier;
@property (nonatomic, retain) NSDictionary *status;
@property (nonatomic, retain) NSArray *supportedFunctions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)functionsInProgress;
- (id)getProprietaryDataForRKEFunction:(id)arg1;
- (id)getRKEFunctionsInProgress;
- (id)getStatusForRKEFunction:(id)arg1;
- (id)getSupportedRKEFunctions;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyIdentifier:(id)arg1 readerIdentifier:(id)arg2 supportedFunctions:(id)arg3 functionsInProgress:(id)arg4 status:(id)arg5 proprietaryData:(id)arg6;
- (bool)isRKEFunctionInProgress:(id)arg1;
- (bool)isRKEFunctionSupported:(id)arg1;
- (id)keyIdentifier;
- (id)proprietaryData;
- (id)readerIdentifier;
- (void)setFunctionsInProgress:(id)arg1;
- (void)setProprietaryData:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setSupportedFunctions:(id)arg1;
- (id)status;
- (id)supportedFunctions;

@end
