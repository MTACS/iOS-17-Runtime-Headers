
@interface HMCameraClipVideoSegment : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    unsigned long long  _byteLength;
    unsigned long long  _byteOffset;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) unsigned long long byteLength;
@property (readonly) unsigned long long byteOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (id)attributeDescriptions;
- (unsigned long long)byteLength;
- (unsigned long long)byteOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithByteLength:(unsigned long long)arg1 byteOffset:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;

@end
