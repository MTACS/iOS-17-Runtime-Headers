
@protocol MCMContainerSchemaAction <NSObject>

@required

+ (NSString *)actionIdentifier;

- (bool)performWithError:(id*)arg1;

@end
