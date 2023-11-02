
@protocol _SFPBScene <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned long long)sceneIdentifier;
- (int)sceneType;
- (void)setSceneIdentifier:(unsigned long long)arg1;
- (void)setSceneType:(int)arg1;

@end
