
@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject {
    struct CMPhotoDecompressionContainer { } * _c;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _cancelFlag;
    bool  _cancelRequested;
    struct CMPhotoDecompressionContainer { } * _figDecompressionContainer;
    unsigned long long  _figGainMapRequestID;
    unsigned long long  _figRequestID;
    PHImageDecoder * _initialDecoder;
}

@property (nonatomic, retain) struct CMPhotoDecompressionContainer { }*c;
@property (nonatomic, readonly) bool cancelRequested;
@property (nonatomic, retain) struct CMPhotoDecompressionContainer { }*figDecompressionContainer;
@property (nonatomic) unsigned long long figGainMapRequestID;
@property (nonatomic) unsigned long long figRequestID;
@property (nonatomic, readonly) PHImageDecoder *initialDecoder;

- (void).cxx_destruct;
- (struct CMPhotoDecompressionContainer { }*)c;
- (void)cancel;
- (bool)cancelRequested;
- (void)dealloc;
- (struct CMPhotoDecompressionContainer { }*)figDecompressionContainer;
- (unsigned long long)figGainMapRequestID;
- (unsigned long long)figRequestID;
- (id)initWithFigRequestID:(unsigned long long)arg1 container:(struct CMPhotoDecompressionContainer { }*)arg2 figDecoder:(id)arg3;
- (id)initWithImageIODecoder:(id)arg1;
- (id)initialDecoder;
- (void)setC:(struct CMPhotoDecompressionContainer { }*)arg1;
- (void)setFigDecompressionContainer:(struct CMPhotoDecompressionContainer { }*)arg1;
- (void)setFigGainMapRequestID:(unsigned long long)arg1;
- (void)setFigRequestID:(unsigned long long)arg1;

@end
