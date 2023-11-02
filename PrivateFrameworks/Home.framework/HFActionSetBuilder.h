
@interface HFActionSetBuilder : HFAbstractBaseActionSetBuilder <HFAccessoryLikeObjectContainer, HFComparable> {
    HFImageIconDescriptor * _iconDescriptor;
    UIColor * _iconTintColor;
    bool  _isActionSetDeleted;
    NSString * _name;
    bool  _showInHomeDashboard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *hf_accessoryLikeObjects;
@property (nonatomic, retain) HFImageIconDescriptor *iconDescriptor;
@property (nonatomic, retain) UIColor *iconTintColor;
@property (nonatomic) bool isActionSetDeleted;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool showInHomeDashboard;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_builderCommitItem;
- (id)_deleteActionSet:(id)arg1 fromHome:(id)arg2;
- (id)_lazilyUpdateIcon;
- (id)_lazilyUpdateIncludedContext;
- (id)_lazy_performValidation;
- (id)_legacyCommitItemWithOperationType:(id)arg1;
- (id)_updateIconOnBuilder:(id)arg1;
- (id)_updateValueForContextType:(unsigned long long)arg1;
- (void)_updateValueForContextType:(unsigned long long)arg1 onActionSetBuilder:(id)arg2;
- (id)commitItem;
- (id)compareToObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createActionSetBuilder;
- (id)deleteActionSet;
- (id)getOrCreateActionSetBuilder;
- (unsigned long long)hash;
- (id)hf_accessoryLikeObjects;
- (id)iconDescriptor;
- (id)iconTintColor;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithHome:(id)arg1;
- (bool)isActionSetDeleted;
- (id)name;
- (void)notifyObserversForCreatedActionSet:(id)arg1;
- (void)notifyObserversForRenamedActionSet:(id)arg1;
- (id)performValidation;
- (void)setIconDescriptor:(id)arg1;
- (void)setIconTintColor:(id)arg1;
- (void)setIsActionSetDeleted:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setShowInHomeDashboard:(bool)arg1;
- (bool)showInHomeDashboard;
- (id)transformedError:(id)arg1 withOperationType:(id)arg2;
- (id)updateActionSetBuilder:(id)arg1;
- (void)updateFromActionSetBuilder:(id)arg1;

@end
