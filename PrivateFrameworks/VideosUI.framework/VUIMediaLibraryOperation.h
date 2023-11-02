
@interface VUIMediaLibraryOperation : VUIAsynchronousOperation {
    VUIAsynchronousWorkToken * _asyncWorkToken;
    NSError * _error;
    VUIMediaLibrary * _mediaLibrary;
}

@property (nonatomic, retain) VUIAsynchronousWorkToken *asyncWorkToken;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;

- (void).cxx_destruct;
- (id)asyncWorkToken;
- (void)cancel;
- (id)error;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1;
- (id)mediaLibrary;
- (void)setAsyncWorkToken:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMediaLibrary:(id)arg1;

@end
