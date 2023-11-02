
@interface IPStateUpdateMessage : NSObject <NSCopying> {
    LSApplicationIdentity * _identity;
    unsigned long long  _type;
}

@property (nonatomic, readonly) LSApplicationIdentity *identity;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)XPCDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identity;
- (id)initWithType:(unsigned long long)arg1 identity:(id)arg2;
- (id)initWithXPCDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (unsigned long long)type;

@end
