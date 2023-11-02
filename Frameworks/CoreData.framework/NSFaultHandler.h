
@interface NSFaultHandler : NSObject

+ (bool)accessInstanceVariablesDirectly;
+ (void)initialize;

- (id)fulfillFault:(id)arg1 withContext:(id)arg2 forIndex:(unsigned long long)arg3;

@end
