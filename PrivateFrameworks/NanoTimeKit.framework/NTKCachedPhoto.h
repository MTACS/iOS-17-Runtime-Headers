
@interface NTKCachedPhoto : NSObject {
    UIImage * _image;
    long long  _index;
    NTKPhoto * _photo;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) NTKPhoto *photo;

- (void).cxx_destruct;
- (id)image;
- (long long)index;
- (id)initWithPhoto:(id)arg1;
- (id)initWithPhoto:(id)arg1 index:(long long)arg2;
- (bool)load;
- (id)photo;

@end
