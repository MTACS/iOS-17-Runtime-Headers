
@interface CALocalDisplay : CADisplay

+ (id)displayWithDisplayId:(unsigned int)arg1 name:(id)arg2 deviceName:(id)arg3 update:(id /* block */)arg4 timings:(id /* block */)arg5;
+ (void)notifyDisplayAdded:(unsigned int)arg1;
+ (void)setDisplayLookupBlock:(id /* block */)arg1;

- (void)postNotification:(long long)arg1;

@end
