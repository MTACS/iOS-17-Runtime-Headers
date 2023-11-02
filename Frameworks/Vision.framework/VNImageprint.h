
@interface VNImageprint : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding, VNRequestSpecifying, VNSerializing, VNSerializingInternal> {
    VNMPImageDescriptor * _descriptor;
    VNRequestSpecifier * _originatingRequestSpecifier;
    unsigned long long  _type;
}

@property (nonatomic, retain) VNMPImageDescriptor *descriptor;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, copy) NSString *requestClassName;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (nonatomic, readonly) unsigned long long serializedLength;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptor;
- (id)distanceToImageprint:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageDescriptor:(id)arg1 type:(unsigned long long)arg2 originatingRequestSpecifier:(id)arg3;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithState:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)originatingRequestSpecifier;
- (Class)requestClassAndReturnError:(id*)arg1;
- (id)requestClassName;
- (unsigned long long)requestRevision;
- (id)serializeStateAndReturnError:(id*)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;
- (void)setDescriptor:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
