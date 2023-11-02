
@interface PHFetchResultMediaTypeCounts : NSObject {
    unsigned long long  _audiosCount;
    unsigned long long  _photosCount;
    unsigned long long  _videosCount;
}

@property (nonatomic, readonly) unsigned long long audiosCount;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, readonly) unsigned long long videosCount;

+ (id)mediaTypeCountsWithPhotosCount:(unsigned long long)arg1 videosCount:(unsigned long long)arg2 audiosCount:(unsigned long long)arg3;

- (unsigned long long)audiosCount;
- (id)initWithPhotosCount:(unsigned long long)arg1 videosCount:(unsigned long long)arg2 audiosCount:(unsigned long long)arg3;
- (unsigned long long)photosCount;
- (unsigned long long)videosCount;

@end
