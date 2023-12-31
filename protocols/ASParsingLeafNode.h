
@protocol ASParsingLeafNode

@required

+ (bool)expectsContent;

- (id)initWithASParseContext:(ASParseContext *)arg1 root:(ASItem *)arg2 parent:(ASItem *)arg3 callbackDict:(NSDictionary *)arg4 streamCallbackDict:(NSDictionary *)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (int)parsingState;

@end
