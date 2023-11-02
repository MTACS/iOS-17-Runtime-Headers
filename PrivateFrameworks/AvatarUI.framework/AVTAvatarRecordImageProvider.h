
@interface AVTAvatarRecordImageProvider : NSObject {
    _AVTAvatarRecordImageProvider * _backingProvider;
}

@property (nonatomic, readonly) _AVTAvatarRecordImageProvider *backingProvider;

- (void).cxx_destruct;
- (id)backingProvider;
- (id)imageForRecord:(id)arg1 scope:(id)arg2;
- (void)imageForRecord:(id)arg1 scope:(id)arg2 handler:(id /* block */)arg3;
- (id)imageForRecord:(id)arg1 scope:(id)arg2 usingService:(bool)arg3;
- (id)init;
- (id)initWithBackingProvider:(id)arg1;

@end
