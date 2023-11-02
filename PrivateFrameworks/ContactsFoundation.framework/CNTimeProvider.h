
@interface CNTimeProvider : NSObject <CNTimeProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

+ (id)defaultProvider;

- (double)timestamp;

@end
