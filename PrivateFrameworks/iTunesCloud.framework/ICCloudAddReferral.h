
@interface ICCloudAddReferral : NSObject <NSSecureCoding> {
    long long  _albumAdamID;
    NSString * _playlistGlobalID;
}

@property (nonatomic, readonly) long long albumAdamID;
@property (nonatomic, readonly, copy) NSString *playlistGlobalID;

+ (id)referralWithAlbumAdamID:(long long)arg1;
+ (id)referralWithPlaylistGlobalID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)albumAdamID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)playlistGlobalID;

@end
