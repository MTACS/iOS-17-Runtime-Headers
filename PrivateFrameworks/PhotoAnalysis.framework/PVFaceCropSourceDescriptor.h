
@interface PVFaceCropSourceDescriptor : NSObject <NSCopying> {
    PVFace * _face;
    PVImage * _image;
}

+ (id)descriptorForFace:(id)arg1 image:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)face;
- (id)image;
- (id)initWithFace:(id)arg1 image:(id)arg2;

@end
