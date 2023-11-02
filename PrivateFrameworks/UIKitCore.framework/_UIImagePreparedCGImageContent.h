
@interface _UIImagePreparedCGImageContent : _UIImageCGImageContent {
    void * _renderRef;
}

- (void)dealloc;
- (bool)isPreparedCGImage;
- (id)typeName;

@end
