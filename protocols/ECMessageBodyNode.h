
@protocol ECMessageBodyNode <NSObject>

@required

- (<ECMessageBodyNode> *)parentNode;

@optional

- (NSString *)getAttribute:(NSString *)arg1;
- (NSString *)tagName;

@end
