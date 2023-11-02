
@protocol REScriptBuffer <NSObject>

@required

- (NSString *)contentForLine:(unsigned long long)arg1;
- (unsigned short)current;
- (bool)isEmpty;
- (void)next;

@end
