
@interface AVAssetTrackEnumerator : NSEnumerator {
    NSEnumerator * _enumerator;
    NSArray * _mediaCharacteristics;
    NSString * _mediaType;
}

+ (id)trackEnumeratorWithAsset:(id)arg1;

- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2;
- (id)initWithAsset:(id)arg1 mediaType:(id)arg2;
- (id)nextObject;
- (void)setMediaCharacteristics:(id)arg1;
- (void)setMediaType:(id)arg1;

@end
