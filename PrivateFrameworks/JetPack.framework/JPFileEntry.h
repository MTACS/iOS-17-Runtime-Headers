
@interface JPFileEntry : NSObject {
    void * _backing;
    bool  _releaseBackingOnDealloc;
}

@property (nonatomic) void*backing;
@property (nonatomic, readonly) NSString *pathname;
@property (nonatomic, readonly) bool releaseBackingOnDealloc;

- (void*)backing;
- (id)initWithBacking:(void*)arg1 releaseOnDealloc:(bool)arg2;
- (id)pathname;
- (bool)releaseBackingOnDealloc;
- (void)setBacking:(void*)arg1;
- (bool)writeStream:(id)arg1 toDirectory:(id)arg2 error:(id*)arg3;

@end
