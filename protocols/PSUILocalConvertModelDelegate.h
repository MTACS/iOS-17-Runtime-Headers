
@protocol PSUILocalConvertModelDelegate <NSObject>

@required

- (void)odcCanceled:(NSString *)arg1;
- (void)odcFailed:(NSString *)arg1;
- (void)odcSuccess:(NSString *)arg1 isViewControllerPopNeeded:(bool)arg2;

@end
