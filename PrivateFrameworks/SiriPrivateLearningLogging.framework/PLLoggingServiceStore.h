
@interface PLLoggingServiceStore : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)storeInstrumentationWithEvents:(id)arg1 completion:(id /* block */)arg2;

@end
