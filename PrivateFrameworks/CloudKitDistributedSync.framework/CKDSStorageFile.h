
@interface CKDSStorageFile : NSObject {
    NSURL * _URL;
    bool  _isOwned;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) bool isOwned;

- (void).cxx_destruct;
- (id)URL;
- (void)dealloc;
- (id)initWithURL:(id)arg1 isOwned:(bool)arg2;
- (bool)isOwned;

@end
