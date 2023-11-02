
@interface PTModule : NSObject <PTComponentObserver, PTModuleComponent, PTSettingsKeyPathObserver> {
    NSArray * _allSections;
    NSPredicate * _appearancePredicate;
    NSString * _childSettingsKeyPath;
    <PTComponentObserver> * _componentObserver;
    NSArray * _components;
    NSArray * _enabledSections;
    NSHashTable * _observers;
    PTSettings * _settings;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *allSections;
@property (nonatomic, retain) NSPredicate *appearancePredicate;
@property (nonatomic, retain) NSString *childSettingsKeyPath;
@property (nonatomic) <PTComponentObserver> *componentObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *enabledSections;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PTSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)moduleWithSettings:(id)arg1;
+ (id)moduleWithTitle:(id)arg1 contents:(id)arg2;
+ (id)sectionWithRows:(id)arg1;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3;
+ (id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3;
+ (id)submoduleWithModule:(id)arg1;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2;
+ (id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_computeEnabledSections;
- (id)_remoteEditingWhitelistedComponent;
- (id)_remoteEditingWhitelistedModule;
- (void)_reportSectionInsertsAndDeletesRelativeTo:(id)arg1;
- (id)_settingsForComponent:(id)arg1;
- (void)_updateEnabledSections;
- (void)addObserver:(id)arg1;
- (id)allSections;
- (id)appearancePredicate;
- (id)childSettingsKeyPath;
- (id)componentObserver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)enabledSections;
- (void)enabledSectionsDidChange:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)indexPathForRow:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContents:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfSections;
- (void)removeObserver:(id)arg1;
- (id)rowAtIndexPath:(id)arg1;
- (void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)sectionDidReload:(id)arg1;
- (void)setAppearancePredicate:(id)arg1;
- (void)setChildSettingsKeyPath:(id)arg1;
- (void)setComponentObserver:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)title;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_restoreDefaultsSection;

@end
