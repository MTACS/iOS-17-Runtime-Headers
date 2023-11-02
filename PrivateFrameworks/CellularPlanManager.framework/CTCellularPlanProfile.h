
@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding> {
    NSString * _iccid;
    bool  _isBootstrap;
    bool  _isDeleteNotAllowed;
    bool  _isDisableNotAllowed;
    bool  _isSelected;
    NSData * _profileId;
    bool  _requiresUserConsent;
}

@property (nonatomic, copy) NSString *iccid;
@property (nonatomic) bool isBootstrap;
@property (nonatomic) bool isDeleteNotAllowed;
@property (nonatomic) bool isDisableNotAllowed;
@property (nonatomic) bool isSelected;
@property (nonatomic, copy) NSData *profileId;
@property (nonatomic) bool requiresUserConsent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfileId:(id)arg1 iccid:(id)arg2 selected:(bool)arg3 bootstrap:(bool)arg4 disableNotAllowed:(bool)arg5 deleteNotAllowed:(bool)arg6 requiresUserConsent:(bool)arg7;
- (bool)isBootstrap;
- (bool)isDeleteNotAllowed;
- (bool)isDisableNotAllowed;
- (bool)isSelected;
- (id)profileId;
- (id)redactedDescription;
- (bool)requiresUserConsent;
- (void)setIccid:(id)arg1;
- (void)setIsBootstrap:(bool)arg1;
- (void)setIsDeleteNotAllowed:(bool)arg1;
- (void)setIsDisableNotAllowed:(bool)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setProfileId:(id)arg1;
- (void)setRequiresUserConsent:(bool)arg1;

@end
