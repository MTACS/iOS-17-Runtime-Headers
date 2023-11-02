
@interface STUnifiedTransportPayloadDestination : NSObject <NSCopying, NSSecureCoding, STSerializableManagedObject> {
    NSString * _address;
    unsigned long long  _state;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 type:(id)arg2;
- (id)initWithAddress:(id)arg1 type:(id)arg2 state:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)type;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
