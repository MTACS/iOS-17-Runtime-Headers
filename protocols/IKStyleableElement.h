
@protocol IKStyleableElement <NSObject>

@required

- (NSString *)elementName;
- (id)objectForKeyedSubscript:(id)arg1;
- (<IKStyleableElement> *)parentStyleableElement;
- (void)setObject:(id)arg1 forKeyedSubscript:(id <NSCopying>)arg2;
- (void)setStyleComposer:(IKViewElementStyleComposer *)arg1;
- (IKViewElementStyleComposer *)styleComposer;

@end
