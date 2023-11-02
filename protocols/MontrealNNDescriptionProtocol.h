
@protocol MontrealNNDescriptionProtocol <NSObject>

@required

- (void)description:(NSMutableString *)arg1 indent:(MontrealLogIndent *)arg2;
- (NSDictionary *)jsonDescription;

@optional

- (id)checkForValidity;
- (void)generateJSONAtPath:(NSString *)arg1;

@end
