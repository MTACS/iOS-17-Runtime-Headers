
@protocol OKActionExports <JSExport>

@required

- (NSDictionary *)context;
- (struct CGPoint { double x1; double x2; })location;
- (unsigned long long)platform;
- (void)setContextObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)state;
- (double)timestamp;
- (unsigned long long)touchCount;

@end
