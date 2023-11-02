
@protocol CRPayloadCommand <CRCommand>

@required

- (<NSSecureCoding><NSCopying> *)payload;
- (void)setPayload:(id <NSSecureCoding><NSCopying>)arg1;

@end
