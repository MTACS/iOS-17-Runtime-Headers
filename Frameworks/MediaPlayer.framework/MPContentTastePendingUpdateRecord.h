
@interface MPContentTastePendingUpdateRecord : NSObject {
    NSUUID * _UUID;
    NSString * _playlistGlobalID;
    long long  _storeAdamID;
    long long  _tasteType;
    long long  _type;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSString *playlistGlobalID;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) long long tasteType;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)UUID;
- (void)_initializeWithType:(long long)arg1 tasteType:(long long)arg2;
- (id)initWithPlaylistGlobalID:(id)arg1 tasteType:(long long)arg2;
- (id)initWithStoreAdamID:(long long)arg1 tasteType:(long long)arg2;
- (id)playlistGlobalID;
- (long long)storeAdamID;
- (long long)tasteType;
- (long long)type;

@end
