
@interface AXSettingsVoiceResourceFootprintSpecifierData : NSObject {
    AXDialectMap * _dialect;
    bool  _isSelected;
    NSString * _name;
    NSArray * _resources;
    bool  _showListItemStyle;
}

@property (nonatomic, retain) AXDialectMap *dialect;
@property (nonatomic) bool isSelected;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *resources;
@property (nonatomic) bool showListItemStyle;

- (void).cxx_destruct;
- (id)description;
- (id)dialect;
- (bool)isSelected;
- (id)name;
- (id)resources;
- (void)setDialect:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setShowListItemStyle:(bool)arg1;
- (bool)showListItemStyle;

@end
