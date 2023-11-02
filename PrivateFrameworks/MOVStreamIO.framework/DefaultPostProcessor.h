
@interface DefaultPostProcessor : NSObject <MOVStreamPostProcessor> {
    MOVStreamFrameConverter * _converter;
    id  exactBytesPerRow;
    unsigned int  originalPixelFormat;
    bool  removePadding;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) id exactBytesPerRow;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int originalPixelFormat;
@property (readonly) unsigned int processedPixelFormat;
@property bool removePadding;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)exactBytesPerRow;
- (id)initWithOriginalPixelFormat:(unsigned int)arg1;
- (unsigned long long)minimumBytesPerRowForPixelBuffer:(struct __CVBuffer { }*)arg1;
- (unsigned int)originalPixelFormat;
- (struct __CVBuffer { }*)pixelBufferWithExactBytesPerRow:(id)arg1 fromPixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (struct __CVBuffer { }*)pixelBufferWithoutPaddingFromPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)processedPixelBufferFrom:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 error:(id*)arg3;
- (unsigned int)processedPixelFormat;
- (bool)removePadding;
- (void)setExactBytesPerRow:(id)arg1;
- (void)setOriginalPixelFormat:(unsigned int)arg1;
- (void)setRemovePadding:(bool)arg1;
- (bool)shouldChangeBytesPerRowOfPixelBuffer:(struct __CVBuffer { }*)arg1;
- (bool)shouldRemovePaddingOfPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2;

@end
