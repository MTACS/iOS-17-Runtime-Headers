
@interface CKSharingContext : NSObject <NSCopying, NSSecureCoding> {
    CKAllowedSharingOptions * _allowedOptions;
    CKContainerSetupInfo * _containerSetupInfo;
    CKShare * _share;
}

@property (nonatomic, retain) CKAllowedSharingOptions *allowedOptions;
@property (nonatomic, retain) CKContainerSetupInfo *containerSetupInfo;
@property (nonatomic, retain) CKShare *share;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedOptions;
- (id)containerSetupInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShare:(id)arg1 containerSetupInfo:(id)arg2 allowedOptions:(id)arg3;
- (void)setAllowedOptions:(id)arg1;
- (void)setContainerSetupInfo:(id)arg1;
- (void)setShare:(id)arg1;
- (id)share;

@end
