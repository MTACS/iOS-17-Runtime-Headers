
@interface UICellAccessoryPopUpMenu : UICellAccessory {
    UIMenu * _menu;
    id /* block */  _selectedElementDidChangeHandler;
}

@property (nonatomic, readonly) UIMenu *_internalMenu;
@property (nonatomic, readonly, copy) UIMenu *menu;
@property (nonatomic, copy) id /* block */ selectedElementDidChangeHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg1;
- (id)_identifier;
- (id)_internalMenu;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMenu:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)menu;
- (id /* block */)selectedElementDidChangeHandler;
- (void)setSelectedElementDidChangeHandler:(id /* block */)arg1;

@end
