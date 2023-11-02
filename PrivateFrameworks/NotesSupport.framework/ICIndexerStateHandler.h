
@interface ICIndexerStateHandler : NSObject <ICStateHandlerProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)logMethodCall:(unsigned long long)arg1;
+ (void)registerStateHandler;
+ (void)setStateDictionary:(id)arg1;
+ (id)stateDictionary;

@end
