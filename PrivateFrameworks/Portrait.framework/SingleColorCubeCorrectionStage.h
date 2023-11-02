
@interface SingleColorCubeCorrectionStage : NSObject {
    <MTLTexture> * _defaultCubeTexture;
}

- (void).cxx_destruct;
- (id)cubeTexture;
- (id)init:(id)arg1 cubeSize:(unsigned int)arg2 data:(const char *)arg3;
- (int)load3DTextureFromData:(const char *)arg1 cubeSize:(unsigned int)arg2 metal:(id)arg3 outTexture:(id*)arg4;

@end
