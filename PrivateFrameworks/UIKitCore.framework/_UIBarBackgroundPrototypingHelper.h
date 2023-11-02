
@interface _UIBarBackgroundPrototypingHelper : NSObject <PTSettingsKeyObserver> {
    NSMutableArray * _callbacks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
