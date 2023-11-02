
@interface CEMApplicationListActiveNSExtensionsCommand_Status : CEMPayloadBase {
    NSArray * _statusExtensions;
}

@property (nonatomic, copy) NSArray *statusExtensions;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithExtensions:(id)arg1;
+ (id)buildWithExtensions:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusExtensions:(id)arg1;
- (id)statusExtensions;

@end
