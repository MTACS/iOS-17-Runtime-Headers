
@interface ICDatabaseStateHandler : NSObject <ICStateHandlerProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addLoggable:(id)arg1 toDictionary:(id)arg2;
+ (id)miscState;
+ (id)modernDatabaseState;
+ (void)registerStateHandler;
+ (id)stateDictionary;
+ (id)stateDictionaryFromLoggables:(id)arg1;

@end
