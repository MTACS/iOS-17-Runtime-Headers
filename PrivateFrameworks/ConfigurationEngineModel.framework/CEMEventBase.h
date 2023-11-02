
@interface CEMEventBase : CEMPayloadBase {
    NSString * _payloadType;
}

@property (nonatomic, copy) NSString *payloadType;

+ (id)eventForPayload:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)payloadType;
- (void)setPayloadType:(id)arg1;

@end
