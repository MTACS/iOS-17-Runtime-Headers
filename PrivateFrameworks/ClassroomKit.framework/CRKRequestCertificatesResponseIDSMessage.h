
@interface CRKRequestCertificatesResponseIDSMessage : NSObject <CRKIDSMessage> {
    NSArray * _certificateDataCollection;
    NSError * _error;
    NSUUID * _requestIdentifier;
}

@property (nonatomic, readonly) NSArray *certificateDataCollection;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly) NSUUID *requestIdentifier;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)certificateDataCollection;
- (id)dictionaryValue;
- (id)error;
- (id)initWithRequestIdentifier:(id)arg1 certificateDataCollection:(id)arg2 error:(id)arg3;
- (long long)messageType;
- (id)requestIdentifier;

@end
