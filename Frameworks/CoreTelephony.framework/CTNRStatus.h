
@interface CTNRStatus : NSObject <NSCopying, NSSecureCoding> {
    bool  _nsaDisabled;
    unsigned long long  _nsaDisabledReasonMask;
    bool  _saDisabled;
    unsigned long long  _saDisabledReasonMask;
    bool  _saSwitchConfigurable;
    bool  _saSwitchVisible;
}

@property (getter=isNSADisabled, nonatomic) bool nsaDisabled;
@property (nonatomic) unsigned long long nsaDisabledReasonMask;
@property (getter=isSADisabled, nonatomic) bool saDisabled;
@property (nonatomic) unsigned long long saDisabledReasonMask;
@property (getter=isSASwitchConfigurable, nonatomic) bool saSwitchConfigurable;
@property (getter=isSASwitchVisible, nonatomic) bool saSwitchVisible;

// Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony

+ (id)default;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSASwitchVisible:(bool)arg1 saSwitchConfigurable:(bool)arg2 saDisabledByBaseband:(bool)arg3 saDisabledReasonMask:(unsigned long long)arg4 nsaDisabledByBaseband:(bool)arg5 nsaDisabledReasonMask:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isNSADisabled;
- (bool)isSADisabled;
- (bool)isSASwitchConfigurable;
- (bool)isSASwitchVisible;
- (unsigned long long)nsaDisabledReasonMask;
- (unsigned long long)saDisabledReasonMask;
- (void)setNsaDisabled:(bool)arg1;
- (void)setNsaDisabledReasonMask:(unsigned long long)arg1;
- (void)setSaDisabled:(bool)arg1;
- (void)setSaDisabledReasonMask:(unsigned long long)arg1;
- (void)setSaSwitchConfigurable:(bool)arg1;
- (void)setSaSwitchVisible:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI

- (bool)are5GRATModeCellsUserInteractable;
- (bool)isDisabledReasonRelevantTo5GRATModeCellsUserInteractableState;

@end
