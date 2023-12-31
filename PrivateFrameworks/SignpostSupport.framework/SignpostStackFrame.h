
@interface SignpostStackFrame : NSObject {
    unsigned long long  _offset;
    NSUUID * _symbolOwnerUUID;
}

@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) NSUUID *symbolOwnerUUID;

- (void).cxx_destruct;
- (id)_serializableArrayRepresentation;
- (id)debugDescription;
- (id)initWithArrayRepresentation:(id)arg1;
- (id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)offset;
- (id)symbolOwnerUUID;

@end
