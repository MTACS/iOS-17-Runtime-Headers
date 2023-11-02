
@interface WFRepresentation : NSObject <NSSecureCoding, WFCopying, WFNaming, WFTyping>

@property (getter=isEncodable, nonatomic, readonly) bool encodable;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, readonly) WFType *wfType;

+ (bool)supportsSecureCoding;

- (id)copyWithName:(id)arg1;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEncodable;
- (id)wfName;
- (id)wfType;

@end
