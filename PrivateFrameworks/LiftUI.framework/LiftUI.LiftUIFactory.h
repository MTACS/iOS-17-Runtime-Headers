
@interface LiftUI.LiftUIFactory : NSObject

+ (id)viewControllerWithData:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;
+ (id)viewControllerWithJson:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;
+ (id)viewControllerWithUrl:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;

- (id)init;

@end
