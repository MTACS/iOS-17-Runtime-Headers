
@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell {
    UIImageView * _emergencyImageView;
    bool  _emergencyPhoneNumber;
}

@property (nonatomic, retain) UIImageView *emergencyImageView;
@property (getter=isEmergencyPhoneNumber, nonatomic) bool emergencyPhoneNumber;

- (void).cxx_destruct;
- (void)buildEmergencyImageView;
- (void)copy:(id)arg1;
- (id)emergencyImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEmergencyPhoneNumber;
- (void)setEmergencyImageView:(id)arg1;
- (void)setEmergencyPhoneNumber:(bool)arg1;
- (void)setProperty:(id)arg1;
- (bool)shouldPerformDefaultAction;
- (bool)shouldShowEmergencyBadge;
- (void)updateEmergencyBadge;
- (void)updateTransportButtons;

@end
