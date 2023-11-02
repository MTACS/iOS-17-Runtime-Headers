
@interface LiveFSResultPlaceholder : NSObject {
    NSString * _filename;
    NSNumber * _modTime;
    NSString * _path;
    NSDictionary * _xattrs;
}

@property (retain) NSString *filename;
@property (retain) NSNumber *modTime;
@property (retain) NSString *path;
@property (retain) NSDictionary *xattrs;

- (void).cxx_destruct;
- (id)filename;
- (id)modTime;
- (id)path;
- (void)setFilename:(id)arg1;
- (void)setModTime:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setXattrs:(id)arg1;
- (id)xattrs;

@end
