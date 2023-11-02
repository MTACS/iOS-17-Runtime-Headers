
@interface PTRestoreDefaultSettingsRowAction : PTRowAction {
    NSString * _settingsKeyPath;
}

@property (nonatomic, readonly) NSString *settingsKeyPath;

+ (id)action;
+ (id)actionWithSettingsKeyPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)defaultHandler;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)settingsKeyPath;

@end
