
@interface _UIImageAsyncCGImageContent : _UIImageCGImageContent {
    _UIOldCGImageDecompressor * _decompressor;
    bool  _finishedDecompressing;
    long long  _orientation;
}

@property bool finishedDecompressing;
@property (readonly) long long orientation;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)description;
- (bool)finishedDecompressing;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 renderingIntent:(unsigned long long)arg4 cache:(bool)arg5;
- (bool)isDecompressing;
- (bool)isEqual:(id)arg1;
- (long long)orientation;
- (void)setFinishedDecompressing:(bool)arg1;
- (id)typeName;

@end
