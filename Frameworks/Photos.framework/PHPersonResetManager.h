
@interface PHPersonResetManager : NSObject {
    PHPhotoLibrary * _library;
    PLProgressFollower * _progressFollower;
    id /* block */  _progressHandler;
}

@property (copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)arg1;
- (id /* block */)progressHandler;
- (id)resetPersonsWithCompletionHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
