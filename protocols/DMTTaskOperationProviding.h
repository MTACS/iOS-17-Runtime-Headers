
@protocol DMTTaskOperationProviding <NSObject>

@required

- (DMTTaskOperation *)taskOperationForRequest:(CATTaskRequest *)arg1;
- (bool)validateRequest:(CATTaskRequest *)arg1 error:(id*)arg2;

@end
