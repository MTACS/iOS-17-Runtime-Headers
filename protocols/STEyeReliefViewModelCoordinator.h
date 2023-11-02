
@protocol STEyeReliefViewModelCoordinator <NSObject>

@required

- (void)persistEyeReliefState:(bool)arg1;
- (void)persistEyeReliefState:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (STEyeReliefViewModel *)viewModel;

@end
