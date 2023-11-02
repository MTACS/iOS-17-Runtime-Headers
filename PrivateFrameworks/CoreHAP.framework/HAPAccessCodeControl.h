
@interface HAPAccessCodeControl : NSObject <HAPTLVProtocol, NSCopying> {
    NSMutableArray * _accessCodeControlRequest;
    NSMutableArray * _accessCodeControlResponse;
    HAPAccessCodeOperationTypeWrapper * _operationType;
}

@property (nonatomic, retain) NSMutableArray *accessCodeControlRequest;
@property (nonatomic, retain) NSMutableArray *accessCodeControlResponse;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPAccessCodeOperationTypeWrapper *operationType;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)accessCodeControlRequest;
- (id)accessCodeControlResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithOperationType:(id)arg1 accessCodeControlRequest:(id)arg2 accessCodeControlResponse:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)operationType;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setAccessCodeControlRequest:(id)arg1;
- (void)setAccessCodeControlResponse:(id)arg1;
- (void)setOperationType:(id)arg1;

@end
