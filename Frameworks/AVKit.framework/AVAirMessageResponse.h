
@interface AVAirMessageResponse : NSObject <AVMessageTransformerProtocol> {
    NSString * _localizedDescription;
    long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

+ (id)messageWithParts:(id)arg1;
+ (id)messageWithVersion:(id)arg1 headers:(id)arg2 bodyData:(id)arg3;
+ (id)responseWithParts:(id)arg1;

- (void).cxx_destruct;
- (id)bodyData;
- (id)description;
- (id)headersForContentLength:(long long)arg1 compression:(id)arg2;
- (id)initWithStatus:(long long)arg1 localizedDescription:(id)arg2;
- (id)localizedDescription;
- (id)messageDataRepresentation;
- (long long)status;

@end
