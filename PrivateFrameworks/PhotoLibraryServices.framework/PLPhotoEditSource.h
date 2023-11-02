
@interface PLPhotoEditSource : PLEditSource {
    bool  _isRAWSource;
}

- (id)initWithURL:(id)arg1 type:(id)arg2 image:(id)arg3 useEmbeddedPreview:(bool)arg4;
- (bool)isRAWSource;
- (id)newSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(bool)arg3;
- (void)setURL:(id)arg1 type:(id)arg2 image:(id)arg3 useEmbeddedPreview:(bool)arg4;

@end
