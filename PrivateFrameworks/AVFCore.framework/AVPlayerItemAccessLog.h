
@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLogInternal * _playerItemAccessLog;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) unsigned long long extendedLogDataStringEncoding;

- (id)_accessLogArray;
- (id)_common_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)events;
- (id)extendedLogData;
- (unsigned long long)extendedLogDataStringEncoding;
- (id)init;
- (id)initWithLogArray:(id)arg1;

@end
