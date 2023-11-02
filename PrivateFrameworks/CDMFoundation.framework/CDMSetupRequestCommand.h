
@interface CDMSetupRequestCommand : CDMBaseCommand {
    CDMDataDispatcherContext * _dataDispatcherContext;
    CDMDynamicConfig * _dynamicConfig;
    NLXSchemaNLXClientEventMetadata * _selfMetadata;
}

@property (nonatomic, retain) CDMDataDispatcherContext *dataDispatcherContext;
@property (nonatomic, readonly) CDMDynamicConfig *dynamicConfig;
@property (nonatomic, readonly) NLXSchemaNLXClientEventMetadata *selfMetadata;

+ (id)setupWithLanguageCode:(id)arg1;

- (void).cxx_destruct;
- (id)dataDispatcherContext;
- (id)dynamicConfig;
- (id)initWithDynamicConfig:(id)arg1;
- (id)initWithDynamicConfig:(id)arg1 selfMetadata:(id)arg2 dataDispatcherContext:(id)arg3;
- (id)selfMetadata;
- (void)setDataDispatcherContext:(id)arg1;

@end
