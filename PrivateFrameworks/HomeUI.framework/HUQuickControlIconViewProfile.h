
@interface HUQuickControlIconViewProfile : HUQuickControlViewProfile {
    NSObject<HFIconDescriptor> * _iconDescriptor;
    NSString * _statusString;
    UIColor * _statusTextColor;
    NSString * _supplementaryString;
}

@property (nonatomic, retain) NSObject<HFIconDescriptor> *iconDescriptor;
@property (nonatomic, retain) NSString *statusString;
@property (nonatomic, retain) UIColor *statusTextColor;
@property (nonatomic, retain) NSString *supplementaryString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)iconDescriptor;
- (void)setIconDescriptor:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setStatusTextColor:(id)arg1;
- (void)setSupplementaryString:(id)arg1;
- (id)statusString;
- (id)statusTextColor;
- (id)supplementaryString;

@end
