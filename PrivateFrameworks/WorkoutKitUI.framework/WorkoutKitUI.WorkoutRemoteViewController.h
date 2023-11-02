
@interface WorkoutKitUI.WorkoutRemoteViewController : _UIRemoteViewController <WorkoutRemoteViewServiceExportedInterface> {
    void dismissHandler;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)dismiss;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
