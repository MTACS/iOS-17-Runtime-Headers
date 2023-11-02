
@interface CLKUIAtlasBacking : NSObject {
    NSData * _data;
    CLKUIMmapFile * _mmapFile;
    struct CLKUIAtlasBackingStructure { 
        void *bytes; 
        unsigned int bytesLength; 
        unsigned int width; 
        unsigned int height; 
        unsigned int planes; 
        unsigned int planeLength; 
        unsigned int bytesPerPixel; 
        unsigned int mipCount; 
        unsigned char format; 
        unsigned char filter; 
        unsigned char wrap; 
        bool mipmaps; 
    }  _structure;
    NSString * _uuid;
}

@property (nonatomic, readonly) const void*bytes;
@property (nonatomic, readonly) unsigned long long bytesLength;
@property (nonatomic, readonly) unsigned long long bytesPerPixel;
@property (nonatomic) unsigned char filter;
@property (nonatomic, readonly) unsigned char format;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long mipCount;
@property (nonatomic, readonly) bool mipmaps;
@property (nonatomic, readonly) unsigned long long planeLength;
@property (nonatomic, readonly) unsigned long long planes;
@property (nonatomic, readonly) struct CLKUIAtlasBackingStructure { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; unsigned char x10; unsigned char x11; bool x12; } structure;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic) unsigned char wrap;

+ (id)atlasBackingWithArt:(id)arg1 uuid:(id)arg2;
+ (id)atlasBackingWithBytes:(const void*)arg1 length:(unsigned long long)arg2 mmapFile:(id)arg3 uuid:(id)arg4;
+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2;
+ (id)atlasBackingWithImage:(id)arg1 uuid:(id)arg2 mipmap:(bool)arg3;
+ (id)atlasBackingWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; unsigned char x10; unsigned char x11; bool x12; })arg2 data:(id)arg3;

- (void).cxx_destruct;
- (const void*)bytes;
- (unsigned long long)bytesLength;
- (unsigned long long)bytesPerPixel;
- (unsigned char)filter;
- (unsigned char)format;
- (unsigned long long)height;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; unsigned char x10; unsigned char x11; bool x12; })arg2 data:(id)arg3;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUIAtlasBackingStructure { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; unsigned char x10; unsigned char x11; bool x12; })arg2 mmapFile:(id)arg3;
- (unsigned long long)mipCount;
- (bool)mipmaps;
- (unsigned long long)planeLength;
- (unsigned long long)planes;
- (void)setFilter:(unsigned char)arg1;
- (void)setWrap:(unsigned char)arg1;
- (struct CLKUIAtlasBackingStructure { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; unsigned char x10; unsigned char x11; bool x12; })structure;
- (id)uuid;
- (unsigned long long)width;
- (unsigned char)wrap;
- (bool)writeToFile:(id)arg1 error:(id*)arg2;

@end
