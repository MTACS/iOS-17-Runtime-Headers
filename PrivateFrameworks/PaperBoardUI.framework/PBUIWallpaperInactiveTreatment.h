
@interface PBUIWallpaperInactiveTreatment : NSObject <NSSecureCoding, PBUIImageTreatment>

@property (nonatomic, readonly) bool canInterpolateToLowerScales;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)applyToImage:(id)arg1 options:(id)arg2 error:(out id*)arg3;
- (bool)commitToRenderingTree:(id)arg1 options:(id)arg2 error:(out id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
