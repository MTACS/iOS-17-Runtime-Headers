
@interface SBSwitcherModelRemovalRequest : NSObject {
    NSMutableDictionary * _appLayoutToAction;
}

@property (nonatomic, readonly, copy) NSArray *appLayouts;

- (void).cxx_destruct;
- (id)actionForAppLayout:(id)arg1;
- (id)appLayouts;
- (void)setAction:(id)arg1 forAppLayout:(id)arg2;

@end
