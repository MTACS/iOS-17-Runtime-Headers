
@interface _UICellAccessoryConfigurationDelete : _UICellAccessoryConfiguration {
    id /* block */  _actionHandler;
}

@property (nonatomic, copy) id /* block */ actionHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifier;
- (long long)_systemType;
- (id /* block */)actionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;

@end
