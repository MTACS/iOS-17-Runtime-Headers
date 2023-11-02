
@interface PTCinematographyTrackAllocator : NSObject {
    long long  _trackIdentifier;
}

@property (nonatomic) long long trackIdentifier;

- (id)_asCinematographyDictionary;
- (id)_initWithCinematographyDictionary:(id)arg1;
- (id)initWithTrackIdentifier:(long long)arg1;
- (long long)nextTrackIdentifier;
- (void)setTrackIdentifier:(long long)arg1;
- (long long)trackIdentifier;

@end
