
@interface SXComponentBlueprintFactory : NSObject <SXComponentBlueprintFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)componentBlueprintForComponent:(id)arg1 layout:(id)arg2 sizer:(id)arg3;

@end
