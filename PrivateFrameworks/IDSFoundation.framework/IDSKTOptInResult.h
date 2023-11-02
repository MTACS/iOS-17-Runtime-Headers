
@interface IDSKTOptInResult : NSObject <NSSecureCoding> {
    NSError * _error;
    NSArray * _optedInOutURIs;
    NSData * _serverProvidedSMT;
    NSDictionary * _serverSMTByURI;
    bool  _success;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *optedInOutURIs;
@property (nonatomic, readonly) NSData *serverProvidedSMT;
@property (nonatomic, readonly) NSDictionary *serverSMTByURI;
@property (nonatomic, readonly) bool success;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuccess:(bool)arg1 optedInOutURIs:(id)arg2 serverSMTByURI:(id)arg3 error:(id)arg4;
- (id)initWithSuccess:(bool)arg1 serverProvidedSMT:(id)arg2 error:(id)arg3;
- (id)optedInOutURIs;
- (id)serverProvidedSMT;
- (id)serverSMTByURI;
- (bool)success;

@end
