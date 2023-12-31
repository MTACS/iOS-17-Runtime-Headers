
@protocol BRCFSEventsDelegate <NSObject>

@required

- (void)fseventAtPath:(BRCRelativePath *)arg1 flags:(unsigned int)arg2;
- (void)fseventAtPath:(BRCRelativePath *)arg1 flags:(unsigned int)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(NSString *)arg4;
- (void)fseventAtPath:(BRCRelativePath *)arg1 flags:(unsigned int)arg2 unresolvedLastPathComponent:(NSString *)arg3;
- (void)fseventRecursiveAtRoot:(BRCRelativePath *)arg1 withReason:(NSString *)arg2;

@end
