
@protocol PMLPlistAndChunksSerializableProtocol <NSObject>

@required

- (id)initWithPlist:(id)arg1 chunks:(NSArray *)arg2 context:(NSDictionary *)arg3;
- (id)toPlistWithChunks:(NSMutableArray *)arg1;

@end
