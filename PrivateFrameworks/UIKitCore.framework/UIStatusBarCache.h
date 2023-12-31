
@interface UIStatusBarCache : NSObject {
    CPBitmapStore * _store;
    bool  _writeable;
}

@property (getter=isWriteable, nonatomic, readonly) bool writeable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3;
- (id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3;
- (id)init;
- (bool)isWriteable;
- (void)removeImagesInGroup:(id)arg1;

@end
