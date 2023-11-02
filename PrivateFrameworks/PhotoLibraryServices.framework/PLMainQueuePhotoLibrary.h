
@interface PLMainQueuePhotoLibrary : PLPhotoLibrary {
    int  _splChangedToken;
}

+ (void)_resetSharedInstance;
+ (id)systemMainQueuePhotoLibrary;

- (void)dealloc;
- (id)initWithName:(const char *)arg1 libraryBundle:(id)arg2 options:(id)arg3;

@end
