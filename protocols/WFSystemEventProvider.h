
@protocol WFSystemEventProvider <NSObject>

@required

+ (bool)isAvailable;

- (id /* block */)eventCallback:(void *)arg1; // needs 1 arg types, found 7: id /* block */, <WFSystemEventProvider> *, long long, id, void*, id, SEL
- (void)invalidate;
- (void)resume;
- (void)setEventCallback:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WFSystemEventProvider> *, long long, id, void*

@end
