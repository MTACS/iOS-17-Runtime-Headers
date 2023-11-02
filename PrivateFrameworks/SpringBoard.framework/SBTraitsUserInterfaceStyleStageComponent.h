
@interface SBTraitsUserInterfaceStyleStageComponent : NSObject <TRAPreferencesStageComponent> {
    NSNumber * _componentOrder;
}

@property (nonatomic, readonly) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentOrder;
- (id)description;
- (id)init;
- (id)initWithComponentOrder:(id)arg1;
- (long long)preferencesType;

@end
