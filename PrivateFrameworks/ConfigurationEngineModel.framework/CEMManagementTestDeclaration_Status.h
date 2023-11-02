
@interface CEMManagementTestDeclaration_Status : CEMPayloadBase {
    NSString * _statusEcho;
}

@property (nonatomic, copy) NSString *statusEcho;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)buildWithEcho:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusEcho:(id)arg1;
- (id)statusEcho;

@end
