
@interface WFStaticMenuElementGroup : NSObject <WFMenuElement, WFMenuElementGroup> {
    NSArray * _menuElements;
    bool  onlyDisplayTitleWhenCollapsed;
    unsigned long long  style;
    NSString * title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *menuElements;
@property (nonatomic) bool onlyDisplayTitleWhenCollapsed;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMenuElements:(id)arg1;
- (id)menuElements;
- (bool)onlyDisplayTitleWhenCollapsed;
- (void)setOnlyDisplayTitleWhenCollapsed:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldCollapse;
- (unsigned long long)style;
- (id)title;

@end
