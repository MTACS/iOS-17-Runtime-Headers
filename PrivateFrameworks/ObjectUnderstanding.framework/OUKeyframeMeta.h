
@interface OUKeyframeMeta : NSObject <NSCopying> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraPose;
    NSUUID * _identifier;
    unsigned long long  _size;
    double  _timestamp;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraPose;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) unsigned long long size;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraPose;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)init;
- (void)setCameraPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned long long)size;
- (double)timestamp;

@end
