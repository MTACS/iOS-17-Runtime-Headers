
@protocol CoreDAVContainerInfoTaskGroupDelegate <CoreDAVTaskGroupDelegate>

@required

- (void)containerInfoTask:(CoreDAVContainerInfoTaskGroup *)arg1 completedWithContainers:(NSSet *)arg2 error:(NSError *)arg3;

@end
