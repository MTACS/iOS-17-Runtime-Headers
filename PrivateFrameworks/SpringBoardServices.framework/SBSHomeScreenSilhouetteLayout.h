
@interface SBSHomeScreenSilhouetteLayout : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCoding, NSCopying> {
    SBSHomeScreenRectangleSilhouette * _dock;
    NSArray * _icons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) SBSHomeScreenRectangleSilhouette *dock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *icons;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dock;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icons;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIcons:(id)arg1 dock:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
