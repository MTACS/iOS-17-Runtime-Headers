
@interface DMTCertificatePayload : DMTConfigurationPayloadBase <DMTConfigurationPayload> {
    NSString * _certificateFileName;
    NSData * _content;
    NSString * _password;
}

@property (nonatomic, readonly) NSString *certificateFileName;
@property (nonatomic, readonly) NSData *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSDictionary *rawDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uuid;

+ (id)supportedPayloadTypes;

- (void).cxx_destruct;
- (id)certificateFileName;
- (id)content;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)password;

@end
