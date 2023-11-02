
@interface SBIconListViewCaptureOnlyBackgroundAssertion : NSObject <BSInvalidatable> {
    NSString * _groupName;
    SBIcon * _icon;
    id /* block */  _invalidationBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIcon *icon;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)groupName;
- (id)icon;
- (id)initWithIcon:(id)arg1 groupName:(id)arg2 invalidation:(id /* block */)arg3;
- (void)invalidate;

@end
