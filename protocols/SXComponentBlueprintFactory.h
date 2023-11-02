
@protocol SXComponentBlueprintFactory <NSObject>

@required

- (SXComponentBlueprint *)componentBlueprintForComponent:(id <SXComponent>)arg1 layout:(id <SXComponentLayout>)arg2 sizer:(SXComponentSizer *)arg3;

@end
