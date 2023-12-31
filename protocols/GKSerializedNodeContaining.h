
@protocol GKSerializedNodeContaining <NSObject>

@required

- (id)node;
- (NSIndexPath *)serializableNodeIndexPath;
- (void)setNode:(id)arg1;
- (void)setSerializableNodeIndexPath:(NSIndexPath *)arg1;

@end
