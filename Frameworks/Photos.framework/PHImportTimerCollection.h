
@interface PHImportTimerCollection : NSObject {
    unsigned char  _aspectRatio;
    unsigned long long  _fileSize;
    unsigned char  _mediaType;
    NSMutableIndexSet * _runningTimers;
    NSMutableArray * _timers;
}

@property unsigned char aspectRatio;

- (void).cxx_destruct;
- (unsigned char)aspectRatio;
- (id)description;
- (double)duration:(unsigned char)arg1;
- (id)initForMediaType:(unsigned char)arg1 fileSize:(unsigned long long)arg2;
- (void)processTimesOfType:(unsigned char)arg1 withBlock:(id /* block */)arg2;
- (void)setAspectRatio:(unsigned char)arg1;
- (id)startTiming:(unsigned char)arg1 subtype:(unsigned char)arg2;
- (void)stopTiming:(id)arg1;

@end
