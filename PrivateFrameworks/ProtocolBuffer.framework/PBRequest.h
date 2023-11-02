
@interface PBRequest : PBCodable

- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
