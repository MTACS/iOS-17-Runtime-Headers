
@interface PathObject : NSObject {
    int  _len;
    char * _path;
}

@property (readonly) int len;
@property (readonly) char *path;

+ (id)pathObjectWithPath:(const char *)arg1 component:(const char *)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithPath:(const char *)arg1 component:(const char *)arg2;
- (int)len;
- (char *)path;

@end
