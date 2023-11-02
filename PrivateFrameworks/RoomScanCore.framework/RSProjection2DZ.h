
@interface RSProjection2DZ : NSObject {
    RSSemanticImage * _bufferDoorImage;
    RSSemanticImage * _bufferHeightImage;
    RSSemanticImage * _bufferImage;
    RSSemanticImage * _doorImage;
    RSSemanticImage * _heightImage;
    RSSemanticImage * _image;
    struct { 
        float global_max_density; 
        float global_max_density_3d; 
        float voxel_size; 
        int z_slice; 
        unsigned long long numSemanticChannels; 
        unsigned long long numAllChannels; 
        unsigned long long numHeightChannels; 
    }  _initParam;
    int  _maxDensity2d;
    int  _maxDensity3d;
}

- (void).cxx_destruct;
- (id)init;

@end
