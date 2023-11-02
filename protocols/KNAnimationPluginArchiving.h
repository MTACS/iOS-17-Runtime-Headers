
@protocol KNAnimationPluginArchiving <NSObject>

@required

+ (void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(long long)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id*)arg1 animationName:(NSString *)arg2 oldAnimationName:(NSString *)arg3 warning:(id*)arg4 type:(long long)arg5 isFromClassic:(bool)arg6 version:(unsigned long long)arg7;

@end
