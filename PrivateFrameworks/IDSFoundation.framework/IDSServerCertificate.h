
@interface IDSServerCertificate : NSObject <NSCopying> {
    NSData * _dataRepresentation;
}

@property (nonatomic, readonly) NSData *dataRepresentation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDataRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
