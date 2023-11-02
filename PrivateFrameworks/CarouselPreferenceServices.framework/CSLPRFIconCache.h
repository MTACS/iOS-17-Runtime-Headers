
@interface CSLPRFIconCache : NSObject {
    NSCache * _cache;
}

+ (id)sharedIconCache;

- (void).cxx_destruct;
- (id)_loadMMappedImageWithName:(id)arg1;
- (id)_path;
- (id)_pathForIconName:(id)arg1;
- (void)_writeMMappedImage:(id)arg1 withName:(id)arg2;
- (id)iconForName:(id)arg1 fallBackToPersistentStoreIfNecessary:(bool)arg2;
- (id)init;
- (void)setIcon:(id)arg1 forName:(id)arg2;

@end
