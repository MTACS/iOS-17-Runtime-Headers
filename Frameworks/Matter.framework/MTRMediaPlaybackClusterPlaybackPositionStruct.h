
@interface MTRMediaPlaybackClusterPlaybackPositionStruct : NSObject <NSCopying> {
    NSNumber * _position;
    NSNumber * _updatedAt;
}

@property (nonatomic, copy) NSNumber *position;
@property (nonatomic, copy) NSNumber *updatedAt;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)position;
- (void)setPosition:(id)arg1;
- (void)setUpdatedAt:(id)arg1;
- (id)updatedAt;

@end
