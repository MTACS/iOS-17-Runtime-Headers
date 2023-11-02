
@interface FBSDisplayConfigurationRequest : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _hdrMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _logicalScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _nativePixelSize;
    long long  _overscanCompensation;
    double  _pointScale;
    double  _refreshRate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } logicalScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } nativePixelSize;
@property (nonatomic, readonly) long long overscanCompensation;
@property (nonatomic, readonly) double pointScale;
@property (nonatomic, readonly) double refreshRate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (long long)hdrMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })logicalScale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })nativePixelSize;
- (long long)overscanCompensation;
- (double)pointScale;
- (double)refreshRate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
