
@interface HAP2EncodedAttributeDatabaseResponseThread : HAP2EncodedResponseThread <HAP2EncodedAttributeDatabaseResponse> {
    NSDictionary * _attributeDatabase;
}

@property (nonatomic, readonly) NSDictionary *attributeDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeDatabase;
- (id)initWithBTLEResponse:(id)arg1 attributeDatabase:(id)arg2;

@end
