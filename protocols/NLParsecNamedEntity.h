
@protocol NLParsecNamedEntity <NSObject>

@required

- (unsigned char)category;
- (NSString *)name;
- (float)score;

@end
