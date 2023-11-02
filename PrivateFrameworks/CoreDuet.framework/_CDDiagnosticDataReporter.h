
@interface _CDDiagnosticDataReporter : NSObject

+ (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)clearDistributionKey:(id)arg1;
+ (void)clearScalarKey:(id)arg1;
+ (void)pushValue:(double)arg1 forDistributionKey:(id)arg2;
+ (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
+ (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)setValue:(long long)arg1 forScalarKey:(id)arg2 limitingSigDigs:(unsigned long long)arg3;

@end
