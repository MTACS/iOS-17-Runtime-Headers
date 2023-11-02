
@interface EspressoDataFrameImageAttachment : EspressoDataFrameAttachment {
    int  _nChannels;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  buffer;
}

@property int nChannels;

+ (struct __CVBuffer { }*)createCVPixelBufferFromvImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 withPixelFormat:(unsigned int)arg2;

- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })copyAsImageGrayscaleOrBGRA;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;
- (int)nChannels;
- (void)setNChannels:(int)arg1;

@end
