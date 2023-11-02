
@interface BSUIMappedImageCacheRegistry : NSObject {
    NSURL * _cachesPath;
    NSString * _tmpPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _tmpPathLock;
    NSMutableSet * _uniqueIdentifiers;
}

- (void).cxx_destruct;

@end
