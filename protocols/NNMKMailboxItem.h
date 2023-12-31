
@protocol NNMKMailboxItem <NSObject>

@required

- (void)addState:(unsigned long long)arg1;
- (bool)checkState:(unsigned long long)arg1;
- (NSString *)preview;
- (void)removeState:(unsigned long long)arg1;
- (void)setPreview:(NSString *)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setSubject:(NSString *)arg1;
- (unsigned long long)status;
- (NSString *)subject;

@end
