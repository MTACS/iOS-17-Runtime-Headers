
@interface MPNowPlayingInfoTransportableSessionResponse : NSObject {
    NSData * _data;
    NSString * _identifier;
    NSString * _sessionType;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *sessionType;

+ (id)responseWithIdentifier:(id)arg1 sessionType:(id)arg2 data:(id)arg3;

- (void).cxx_destruct;
- (id)_init;
- (id)data;
- (id)identifier;
- (id)sessionType;

@end
