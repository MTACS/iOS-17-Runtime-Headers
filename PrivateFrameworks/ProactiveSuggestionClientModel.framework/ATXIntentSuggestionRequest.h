
@interface ATXIntentSuggestionRequest : ATXSuggestionRequest {
    NSArray * _bundleIds;
    NSArray * _intentClassNames;
    NSNumber * _limit;
}

@property (nonatomic, readonly) NSArray *bundleIds;
@property (nonatomic, readonly) NSArray *intentClassNames;
@property (nonatomic, readonly) NSNumber *limit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIds;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatorId:(id)arg1 consumerSubType:(unsigned char)arg2 bundleIds:(id)arg3 intentClassNames:(id)arg4 limit:(id)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUUID:(id)arg1 originatorId:(id)arg2 consumerSubType:(unsigned char)arg3 bundleIds:(id)arg4 intentClassNames:(id)arg5 limit:(id)arg6 timeout:(double)arg7;
- (id)initWithUUID:(id)arg1 originatorId:(id)arg2 consumerSubType:(unsigned char)arg3 timeout:(double)arg4;
- (id)intentClassNames;
- (bool)isEqual:(id)arg1;
- (id)limit;
- (id)proto;

@end
