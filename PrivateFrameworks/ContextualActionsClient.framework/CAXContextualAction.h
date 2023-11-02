
@interface CAXContextualAction : NSObject <ATXProtoBufWrapper, ATXSuggestionExecutableProtocol, NSSecureCoding> {
    NSString * _actionIdentifier;
    long long  _confidence;
    NSArray * _parameters;
    NSUUID * _suggestionUUID;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic) long long confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *parameters;
@property (nonatomic, retain) NSUUID *suggestionUUID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (long long)confidence;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionIdentifier:(id)arg1 confidence:(long long)arg2 parameters:(id)arg3;
- (id)initWithActionIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)parameters;
- (id)proto;
- (void)setConfidence:(long long)arg1;
- (void)setSuggestionUUID:(id)arg1;
- (id)suggestionUUID;

@end
