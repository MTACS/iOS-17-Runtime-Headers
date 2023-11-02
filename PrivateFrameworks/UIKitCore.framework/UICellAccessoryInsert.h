
@interface UICellAccessoryInsert : UICellAccessory {
    id /* block */  _actionHandler;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, retain) UIColor *backgroundColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg1;
- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(bool)arg1;
- (id /* block */)actionHandler;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setBackgroundColor:(id)arg1;

@end
