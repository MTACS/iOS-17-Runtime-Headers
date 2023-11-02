
@interface _ICQPhotosInfo : NSObject {
    unsigned long long  _photoCount;
    unsigned long long  _videoCount;
}

@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;

+ (void)getInfoWithCompletion:(id /* block */)arg1;
+ (id)mockCount:(id)arg1;

- (unsigned long long)photoCount;
- (void)setPhotoCount:(unsigned long long)arg1;
- (void)setVideoCount:(unsigned long long)arg1;
- (unsigned long long)videoCount;

@end
