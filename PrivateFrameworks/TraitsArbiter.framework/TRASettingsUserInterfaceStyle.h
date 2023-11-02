
@interface TRASettingsUserInterfaceStyle : NSObject <NSCopying, NSMutableCopying> {
    TRAArbitrationUserInterfaceStyleInputs * _userInterfaceStyleInputs;
}

@property (nonatomic, readonly) TRAArbitrationUserInterfaceStyleInputs *userInterfaceStyleInputs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithUserInterfaceStyleInputs:(id)arg1;
- (id)initWithUserInterfaceStyleSettings:(id)arg1;
- (bool)isEqualToUserInterfaceStyleSettings:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)userInterfaceStyleInputs;

@end
