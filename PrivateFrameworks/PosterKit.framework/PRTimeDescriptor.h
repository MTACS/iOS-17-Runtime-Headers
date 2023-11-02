
@interface PRTimeDescriptor : NSObject <BSXPCSecureCoding, NSCopying> {
    UIColor * _color;
    UIFont * _font;
}

@property (nonatomic, retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)font;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;

@end
