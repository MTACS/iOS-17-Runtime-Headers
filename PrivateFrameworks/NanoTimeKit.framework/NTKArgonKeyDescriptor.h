
@interface NTKArgonKeyDescriptor : NSObject <NSCopying, NSSecureCoding, NTKArgonJSONEncodable> {
    NSString * _fileName;
    NSString * _key;
}

@property (nonatomic, readonly) NSDictionary *argon_JSONRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fileName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *key;
@property (readonly) Class superclass;

+ (id)keyDescriptorFromBundle:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unfilteredKeyDescriptorFromBundle:(id)arg1;

- (void).cxx_destruct;
- (id)argon_JSONRepresentation;
- (id)argon_initWithJSONRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 fileName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;

@end
