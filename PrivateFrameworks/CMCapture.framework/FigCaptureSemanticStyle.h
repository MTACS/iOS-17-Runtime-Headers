
@interface FigCaptureSemanticStyle : NSObject <FigXPCCoding, NSSecureCoding> {
    unsigned long long  _hash;
    float  _mappedToneBias;
    float  _mappedWarmthBias;
    float  _toneBias;
    float  _warmthBias;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIdentity, nonatomic, readonly) bool identity;
@property (nonatomic, readonly) float mappedToneBias;
@property (nonatomic, readonly) float mappedWarmthBias;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float toneBias;
@property (nonatomic, readonly) float warmthBias;

+ (id)identityStyle;
+ (id)semanticStyleWithToneBias:(float)arg1 warmthBias:(float)arg2;
+ (bool)supportsSecureCoding;

- (id)copyXPCEncoding;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIdentity;
- (float)mappedToneBias;
- (float)mappedWarmthBias;
- (float)toneBias;
- (float)warmthBias;

@end
