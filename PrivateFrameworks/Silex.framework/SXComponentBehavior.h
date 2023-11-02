
@interface SXComponentBehavior : SXJSONObject

@property (nonatomic, readonly) NSString *type;

- (Class)handlerClassForComponent:(id)arg1;

@end
