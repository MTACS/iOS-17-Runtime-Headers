
@protocol TSWPStyleProviding <NSObject>

@required

- (<TSWPStyleProvider> *)styleProvider;
- (<TSWPStyleProvider> *)styleProviderForTextLayout:(TSWPLayout *)arg1;
- (bool)wantsToProvideStylesForTextLayout:(TSWPLayout *)arg1;

@end
