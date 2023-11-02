
@protocol AVEventPublishing <NSObject>

@required

- (void)addAction:(void *)arg1 forEvent:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, NSString *
- (void)addAction:(SEL)arg1 withTarget:(id)arg2 forEvent:(NSString *)arg3;
- (void)removeAction:(SEL)arg1 withTarget:(id)arg2 forEvent:(NSString *)arg3;

@end
