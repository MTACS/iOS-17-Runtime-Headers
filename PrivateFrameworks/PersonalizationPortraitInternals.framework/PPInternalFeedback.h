
@interface PPInternalFeedback : PPBaseFeedback <BMStoreData> {
    NSString * _build;
    unsigned char  _storeType;
}

@property (nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char storeType;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)fromBaseFeedback:(id)arg1 storeType:(unsigned char)arg2;

- (void).cxx_destruct;
- (id)build;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)initWithFeedbackItems:(id)arg1 timestamp:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5;
- (id)initWithFeedbackItems:(id)arg1 timestamp:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5 storeType:(unsigned char)arg6 build:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)json;
- (id)serialize;
- (void)setStoreType:(unsigned char)arg1;
- (unsigned char)storeType;

@end
