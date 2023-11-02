
@interface HUQuickControlContext : NSObject {
    NSSet * _controlItems;
    unsigned long long  _controlOrientation;
    HMHome * _home;
    <HUQuickControlItemUpdating> * _itemUpdater;
    unsigned long long  _preferredControl;
    Class  _quickControlClass;
}

@property (nonatomic, readonly, copy) NSSet *controlItems;
@property (nonatomic) unsigned long long controlOrientation;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HUQuickControlItemUpdating> *itemUpdater;
@property (nonatomic) unsigned long long preferredControl;
@property (nonatomic, readonly) Class quickControlClass;

- (void).cxx_destruct;
- (id)affectedCharacteristics;
- (id)controlItems;
- (unsigned long long)controlOrientation;
- (id)home;
- (id)initWithQuickControlClass:(Class)arg1 controlItems:(id)arg2 home:(id)arg3 itemUpdater:(id)arg4;
- (id)itemUpdater;
- (unsigned long long)preferredControl;
- (Class)quickControlClass;
- (void)setControlOrientation:(unsigned long long)arg1;
- (void)setPreferredControl:(unsigned long long)arg1;
- (Class)viewProfileClass;

@end
