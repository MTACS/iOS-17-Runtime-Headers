
@interface WFFileSize : NSObject <NSCopying, NSSecureCoding, WFNaming, WFSerializableContent> {
    long long  _byteCount;
}

@property (nonatomic, readonly) long long byteCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (long long)byteCount;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (unsigned long long)hash;
- (id)initWithByteCount:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
