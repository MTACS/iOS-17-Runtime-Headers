
@interface _UIImageLoader : NSObject {
    _Atomic bool  _cancelled;
    NSMutableArray * _completionTrampolines;
    NSError * _error;
    _Atomic bool  _finished;
    UIImage * _image;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _started;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _trampolineLock;
}

@property (readonly) NSError *_error;
@property (readonly) UIImage *_image;
@property (readonly) bool _isCancelled;
@property (readonly) bool _isFinished;

+ (id)_imageLoaderWithDataFromItemProvider:(id)arg1 typeIdentifier:(id)arg2;
+ (id)_imageLoaderWithLoadingQueue:(id)arg1 handler:(id /* block */)arg2;
+ (id)_imageLoaderWithURLRequest:(id)arg1 session:(id)arg2;

- (void).cxx_destruct;
- (void)_cancel;
- (id)_error;
- (id)_image;
- (bool)_isCancelled;
- (bool)_isFinished;
- (void)_loadImageWithCompletionQueue:(id)arg1 handler:(id /* block */)arg2;
- (bool)_really_cancel;
- (void)_really_loadImage:(id /* block */)arg1;
- (id)init;

@end
