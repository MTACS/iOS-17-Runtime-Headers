
@interface PTSection : NSObject <PTModuleComponent, PTRowObserver, PTSettingsKeyPathObserver> {
    NSPredicate * _appearancePredicate;
    NSString * _childSettingsKeyPath;
    <PTComponentObserver> * _componentObserver;
    NSMutableArray * _enabledRows;
    bool  _enabledSection;
    id /* block */  _footerTextGetter;
    NSArray * _rows;
    PTSettings * _settings;
    NSString * _title;
    id /* block */  _unregisterBlock;
}

@property (nonatomic, readonly) NSArray *allSections;
@property (nonatomic, retain) NSPredicate *appearancePredicate;
@property (nonatomic, retain) NSString *childSettingsKeyPath;
@property (nonatomic) <PTComponentObserver> *componentObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *enabledSections;
@property (nonatomic, copy) id /* block */ footerTextGetter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PTSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, copy) id /* block */ unregisterBlock;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_recomputeEnabledSection;
- (void)_reloadEnabledRows;
- (id)_remoteEditingWhitelistedComponent;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (void)_sendReload;
- (bool)_shouldEnableRow:(id)arg1;
- (void)_updateEnabledRows;
- (id)allSections;
- (id)appearancePredicate;
- (id)childSettingsKeyPath;
- (id)componentObserver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)enabledSections;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)footerTextGetter;
- (unsigned long long)hash;
- (unsigned long long)indexOfRow:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRows:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfRows;
- (void)reloadSection;
- (id)rowAtIndex:(unsigned long long)arg1;
- (void)rowDidReload:(id)arg1;
- (void)setAppearancePredicate:(id)arg1;
- (void)setChildSettingsKeyPath:(id)arg1;
- (void)setComponentObserver:(id)arg1;
- (void)setFooterTextGetter:(id /* block */)arg1;
- (void)setSettings:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnregisterBlock:(id /* block */)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)title;
- (id /* block */)unregisterBlock;

@end
