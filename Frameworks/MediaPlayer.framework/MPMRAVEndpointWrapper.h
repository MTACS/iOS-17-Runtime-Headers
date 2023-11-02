
@interface MPMRAVEndpointWrapper : MPCFWrapper

@property (nonatomic, readonly) void*unwrappedValue;

- (id)initWithMRAVEndpoint:(void*)arg1;
- (void*)unwrappedValue;

@end
