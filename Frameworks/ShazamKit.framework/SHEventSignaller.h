
@interface SHEventSignaller : NSObject <SHEventSignalling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serverConnection;

- (void)sendEventSignal:(id)arg1;

@end
