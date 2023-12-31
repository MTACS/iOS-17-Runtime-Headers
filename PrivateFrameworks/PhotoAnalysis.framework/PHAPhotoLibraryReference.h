
@interface PHAPhotoLibraryReference : NSObject {
    NSString * _path;
}

@property (readonly, copy) NSString *path;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithLibraryURL:(id)arg1;
- (bool)isEqualToPhotoLibraryReference:(id)arg1;
- (id)path;

@end
