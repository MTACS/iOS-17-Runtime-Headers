
@interface TSUURLTracker : NSObject <TSUURLWrapper> {
    TSUURLTrackerFilePresenter * _filePresenter;
}

@property (readonly) NSURL *URL;
@property (readonly) NSData *bookmarkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (id)URLAndReturnError:(id*)arg1;
- (id)bookmarkData;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithBookmarkData:(id)arg1;
- (id)initWithBookmarkData:(id)arg1 delegate:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (void)pause;
- (void)resume;
- (void)stop;

@end
