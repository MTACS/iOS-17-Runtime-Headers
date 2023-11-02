
@interface UICellAccessoryDetail : UICellAccessory {
    id /* block */  _actionHandler;
}

@property (nonatomic, copy) id /* block */ actionHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg1;
- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(bool)arg1;
- (id /* block */)actionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;

@end
