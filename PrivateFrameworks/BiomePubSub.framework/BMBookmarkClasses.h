
@interface BMBookmarkClasses : NSObject {
    bool  _addedBiomeStorageClasses;
    NSMutableSet * _allowed;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)allowClassesForSecureCodingBMBookmark:(id)arg1;
- (id)allowedClassesForSecureCodingBMBookmark;
- (id)init;

@end
