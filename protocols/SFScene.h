
@protocol SFScene <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (unsigned long long)sceneIdentifier;
- (int)sceneType;
- (void)setSceneIdentifier:(unsigned long long)arg1;
- (void)setSceneType:(int)arg1;

@end
