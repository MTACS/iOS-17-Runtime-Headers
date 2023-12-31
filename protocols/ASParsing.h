
@protocol ASParsing

@required

+ (bool)acceptsTopLevelLeaves;
+ (bool)expectsContent;
+ (bool)frontingBasicTypes;
+ (bool)notifyOfUnknownTokens;
+ (bool)parsingLeafNode;
+ (bool)parsingWithSubItems;

- (void)parseASParseContext:(ASParseContext *)arg1 root:(ASItem *)arg2 parent:(ASItem *)arg3 callbackDict:(NSDictionary *)arg4 streamCallbackDict:(NSDictionary *)arg5 account:(ASAccount *)arg6;
- (int)parsingState;

@end
