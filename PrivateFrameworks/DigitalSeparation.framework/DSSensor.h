
@interface DSSensor : NSObject {
    NSString * _localizedName;
    NSString * _tccPermission;
}

@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *tccPermission;

- (void).cxx_destruct;
- (id)localizedName;
- (void)setLocalizedName:(id)arg1;
- (void)setTccPermission:(id)arg1;
- (id)tccPermission;

@end
