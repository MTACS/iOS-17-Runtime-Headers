
@interface SDSignalHandler : NSObject

+ (void)addMemoryHandler;
+ (void)addSignalHandler;
+ (void)setDelegate:(id)arg1 memoryStatusFlags:(unsigned long long)arg2;
+ (void)setupHandlers;

@end
