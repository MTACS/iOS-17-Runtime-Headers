
@interface HUAccessoryRepresentableItemModuleContext : NSObject {
    void accessoryContainer;
    void filter;
    void hideSourceItemDescriptions;
    void itemFilter;
    void objectLevel;
    void sectionGroupingType;
    void showFooter;
    void valueSource;
}

@property (nonatomic, retain) <HFAccessoryLikeObjectContainer> *accessoryContainer;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic) bool hideSourceItemDescriptions;
@property (nonatomic, copy) id /* block */ itemFilter;
@property (nonatomic) unsigned long long objectLevel;
@property (nonatomic) long long sectionGroupingType;
@property (nonatomic) bool showFooter;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)accessoryContainer;
- (id /* block */)filter;
- (bool)hideSourceItemDescriptions;
- (id)init;
- (id)initWithObjectLevel:(unsigned long long)arg1 accessoryContainer:(id)arg2 sectionGroupingType:(long long)arg3 hideSourceItemDescriptions:(bool)arg4 showFooter:(bool)arg5 valueSource:(id)arg6 filter:(id /* block */)arg7 itemFilter:(id /* block */)arg8;
- (id /* block */)itemFilter;
- (unsigned long long)objectLevel;
- (long long)sectionGroupingType;
- (void)setAccessoryContainer:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setHideSourceItemDescriptions:(bool)arg1;
- (void)setItemFilter:(id /* block */)arg1;
- (void)setObjectLevel:(unsigned long long)arg1;
- (void)setSectionGroupingType:(long long)arg1;
- (void)setShowFooter:(bool)arg1;
- (void)setValueSource:(id)arg1;
- (bool)showFooter;
- (id)valueSource;

@end
