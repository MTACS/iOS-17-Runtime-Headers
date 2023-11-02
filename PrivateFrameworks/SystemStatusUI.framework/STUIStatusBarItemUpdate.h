
@interface STUIStatusBarItemUpdate : NSObject <BSDebugDescriptionProviding, NSCopying> {
    STStatusBarData * _data;
    bool  _dataChanged;
    bool  _enabled;
    bool  _enablementChanged;
    NSDictionary * _placementInfo;
    STUIStatusBarStyleAttributes * _styleAttributes;
    bool  _styleAttributesChanged;
}

@property (nonatomic, retain) STStatusBarData *data;
@property (nonatomic) bool dataChanged;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (nonatomic) bool enablementChanged;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *placementInfo;
@property (nonatomic, retain) STUIStatusBarStyleAttributes *styleAttributes;
@property (nonatomic) bool styleAttributesChanged;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (bool)dataChanged;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)enabled;
- (bool)enablementChanged;
- (id)placementInfo;
- (void)setData:(id)arg1;
- (void)setDataChanged:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnablementChanged:(bool)arg1;
- (void)setPlacementInfo:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setStyleAttributesChanged:(bool)arg1;
- (id)styleAttributes;
- (bool)styleAttributesChanged;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
