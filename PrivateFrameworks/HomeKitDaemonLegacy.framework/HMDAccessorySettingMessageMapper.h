
@interface HMDAccessorySettingMessageMapper : HMDSettingMessageMapper {
    bool  _shouldAllowSharedAdminToEditConstraints;
}

@property (nonatomic) bool shouldAllowSharedAdminToEditConstraints;

- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 allowSharedAdminEditConstraints:(bool)arg3;
- (void)setShouldAllowSharedAdminToEditConstraints:(bool)arg1;
- (bool)shouldAllowSharedAdminToEditConstraints;

@end
