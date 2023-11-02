
@interface HAP2EncodedEmptyRequestThread : HAP2LoggingObject <HAP2EncodedRequest> {
    unsigned long long  _requestType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long requestType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (id)body;
- (id)initWithRequestType:(unsigned long long)arg1;
- (bool)isEncrypted;
- (unsigned long long)requestType;
- (id)serialize;
- (unsigned long long)type;

@end
