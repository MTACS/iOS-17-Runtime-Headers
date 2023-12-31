
@protocol TSPIdentifiedDataRepresentation <NSObject>

@required

- (long long)identifier;
- (bool)isLoaded;
- (bool)setDataRepresentation:(SFUDataRepresentation *)arg1 shouldCopy:(bool)arg2 error:(id*)arg3;

@optional

- (bool)fromExternalReference;
- (void)setFileStateIdentifier:(NSString *)arg1;
- (void)setRelativeDataPath:(NSString *)arg1;

@end
