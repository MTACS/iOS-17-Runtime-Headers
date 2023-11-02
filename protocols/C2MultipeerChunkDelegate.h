
@protocol C2MultipeerChunkDelegate <NSObject>

@required

- (NSData *)chunkDataFromSignature:(NSData *)arg1 forContainerIdentifier:(NSString *)arg2;

@end
