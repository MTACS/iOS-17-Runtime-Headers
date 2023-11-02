
@interface VNDetectionprint : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding, VNRequestRevisionProviding> {
    VNRequestSpecifier * _originatingRequestSpecifier;
    NSDictionary * _tensorsDictionary;
}

@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (nonatomic, readonly, copy) NSArray *tensorKeys;

+ (id)knownTensorKeysForRequestRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;
+ (id)tensorShapeForKey:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTensorsDictionary:(id)arg1 originatingRequestSpecifier:(id)arg2;
- (id)initWithTensorsDictionary:(id)arg1 requestRevision:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)originatingRequestSpecifier;
- (unsigned long long)requestRevision;
- (id)tensorForKey:(id)arg1 error:(id*)arg2;
- (id)tensorKeys;

@end
