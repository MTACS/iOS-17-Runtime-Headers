
@protocol IPStateAndProgressRegistry <NSObject>

@required

- (IPInstallableProgressData *)currentProgressForIdentity:(LSApplicationIdentity *)arg1 error:(id*)arg2;
- (void)registerProgressSource:(IPInstallableProgressSource *)arg1;
- (void)registerStateSource:(IPInstallableStateSource *)arg1;
- (void)unregisterProgressSource:(IPInstallableProgressSource *)arg1;
- (void)unregisterStateSource:(IPInstallableStateSource *)arg1;

@end
