
@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider> {
    SBSnapshotDataProviderContext * _context;
    UIImage * _image;
    double  _scaleFactor;
}

@property (nonatomic, readonly, retain) XBSnapshotDataProviderContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)fetchImageForFormat:(long long)arg1;
- (id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(double)arg3;

@end
