
@interface AVTAvatarDescriptor : NSObject <NSCopying, NSSecureCoding>

+ (bool)_canLoadDataRepresentationWithVersion:(unsigned short)arg1 minimumCompatibleVersion:(unsigned short)arg2 error:(id*)arg3;
+ (id)_descriptorWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
+ (id)_dictionaryRepresentationFromDataRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)canLoadDataRepresentation:(id)arg1;
+ (unsigned char)classIdentifier;
+ (id)dataRepresentationFromUnsecureDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)descriptorWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)descriptorWithURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)encodeInDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;

@end
