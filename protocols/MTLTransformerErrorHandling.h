
@protocol MTLTransformerErrorHandling <NSObject>

@required

- (id)transformedValue:(id)arg1 success:(bool*)arg2 error:(id*)arg3;

@optional

- (id)reverseTransformedValue:(id)arg1 success:(bool*)arg2 error:(id*)arg3;

@end
