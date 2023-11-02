
@interface DRConfig : NSObject <NSSecureCoding> {
    NSString * _build;
    NSString * _configDescription;
    NSUUID * _configUUID;
    NSDate * _endDate;
    NSData * _payload;
    NSDictionary * _payloadDictionaryRepresentation;
    bool  _payloadIsJSON;
    NSDate * _receivedDate;
    bool  _skippedHysteresis;
    NSDate * _startDate;
    NSString * _teamID;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, readonly) NSString *configDescription;
@property (nonatomic, readonly) NSUUID *configUUID;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSData *payload;
@property (nonatomic, readonly) NSDictionary *payloadDictionaryRepresentation;
@property (nonatomic, readonly) bool payloadIsJSON;
@property (nonatomic, readonly) NSDate *receivedDate;
@property (nonatomic, readonly) bool skippedHysteresis;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *teamID;

// Image: /System/Library/PrivateFrameworks/DiagnosticRequest.framework/DiagnosticRequest

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)build;
- (id)configDescription;
- (id)configUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithBuild:(id)arg1 teamID:(id)arg2 configDescription:(id)arg3 configUUID:(id)arg4 receivedDate:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 payload:(id)arg8 payloadIsJSON:(bool)arg9 skipHysteresis:(bool)arg10;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDict:(id)arg1 receivedDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfig:(id)arg1;
- (id)jsonDictRepresentation;
- (id)payload;
- (id)payloadDictionaryRepresentation;
- (bool)payloadIsJSON;
- (id)receivedDate;
- (void)setBuild:(id)arg1;
- (bool)skippedHysteresis;
- (id)startDate;
- (id)teamID;

// Image: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService

- (id)ON_CONTEXT_QUEUE_configMOInContext:(id)arg1;
- (id)ON_CONTEXT_QUEUE_initWithConfigMO:(id)arg1;

@end
