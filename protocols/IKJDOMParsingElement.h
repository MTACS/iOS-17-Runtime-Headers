
@protocol IKJDOMParsingElement <JSExport>

@required

- (NSString *)innerHTML;
- (void)insertAdjacentHTML:(NSString *)arg1 :(NSString *)arg2;
- (NSString *)outerHTML;
- (void)setInnerHTML:(NSString *)arg1;
- (void)setOuterHTML:(NSString *)arg1;

@end
