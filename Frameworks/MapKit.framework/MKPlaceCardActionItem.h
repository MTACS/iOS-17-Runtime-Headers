
@interface MKPlaceCardActionItem : NSObject {
    MKPlaceActionItemAppearanceProvider * _appearanceProvider;
    UIColor * _backgroundColor;
    bool  _enabled;
    UIColor * _glyphColor;
    bool  _selected;
    MKPlaceCardActionItem * _selectedItem;
    unsigned long long  _type;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly, copy) NSString *displayString;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *glyph;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic) bool selected;
@property (nonatomic, retain) MKPlaceCardActionItem *selectedItem;
@property (nonatomic, readonly) unsigned long long type;

+ (id)actionItemWithType:(unsigned long long)arg1;
+ (id)actionItemWithType:(unsigned long long)arg1 actionDataProvider:(id)arg2 enabled:(bool)arg3;
+ (id)actionTypesToMenuElements:(id)arg1 menuElementCreationBlock:(id /* block */)arg2;
+ (id)buildActionMenuForItems:(id)arg1 buildingOptions:(id)arg2 menuElementCreationBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)description;
- (id)displayString;
- (bool)enabled;
- (id)glyph;
- (id)glyphColor;
- (id)initWithType:(unsigned long long)arg1 appearanceProvider:(id)arg2 enabled:(bool)arg3;
- (id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 glyph:(id)arg3 enabled:(bool)arg4;
- (bool)isDestructiveForDisplayStyle:(unsigned long long)arg1;
- (id)menuElementWithActionHandler:(id /* block */)arg1;
- (id)resolvedActionItem;
- (bool)selected;
- (id)selectedItem;
- (void)setBackgroundColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedItem:(id)arg1;
- (id)symbolForDisplayStyle:(unsigned long long)arg1;
- (id)titleForDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)type;

@end
