
@protocol _UIViewServiceDeputy <NSObject, _UIViewServiceDeputy_UIViewServiceInterface>

@required

+ (<_UIViewServiceDeputyXPCInterface> *)XPCInterface;

- (_UIAsyncInvocationObserver *)invalidate;

@end
