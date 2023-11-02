
@protocol MPCSupportedCommands <NSObject>

@required

- (NSDictionary *)allCommandInfos;
- (void*)commandInfoForCommand:(unsigned int)arg1;

@end
