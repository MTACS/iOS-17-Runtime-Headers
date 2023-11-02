
@interface CHSWidgetRenderScheme : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _backgroundViewPolicy;
    unsigned long long  _renderingMode;
    unsigned long long  _renderingModes;
}

@property (nonatomic, readonly) unsigned long long backgroundViewPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long renderingMode;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_compatibilityRenderSchemesFromDeprecatedRenderingModes;
- (unsigned long long)backgroundViewPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRenderingMode:(unsigned long long)arg1;
- (id)initWithRenderingMode:(unsigned long long)arg1 backgroundViewPolicy:(unsigned long long)arg2;
- (id)initWithRenderingModes:(unsigned long long)arg1;
- (id)initWithRenderingModes:(unsigned long long)arg1 backgroundViewPolicy:(unsigned long long)arg2;
- (id)initWithRenderingModes:(unsigned long long)arg1 opaque:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOpaque;
- (bool)isValid;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)renderingMode;
- (unsigned long long)renderingModes;

@end
