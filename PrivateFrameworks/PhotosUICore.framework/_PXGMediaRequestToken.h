
@interface _PXGMediaRequestToken : NSObject {
    PXMediaProvider * _mediaProvider;
    long long  _mediaRequestID;
}

@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) long long mediaRequestID;

- (void).cxx_destruct;
- (id)initWithMediaProvider:(id)arg1 mediaRequestID:(long long)arg2;
- (id)mediaProvider;
- (long long)mediaRequestID;

@end
