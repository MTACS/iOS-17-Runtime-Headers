
@protocol NUImageCopying

@required

- (<NUImage> *)immutableImageCopy;
- (<NUMutableImage> *)mutableImageCopy;
- (<NUMutablePurgeableImage> *)mutablePurgeableImageCopy;
- (<NUPurgeableImage> *)purgeableImageCopy;

@end
