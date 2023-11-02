
@protocol NUNIFileConverter

@required

- (bool)combineFilesAt:(NSArray *)arg1 to:(NSURL *)arg2 error:(id*)arg3;
- (bool)convertFileAt:(NSURL *)arg1 to:(NSURL *)arg2 error:(id*)arg3;

@end
