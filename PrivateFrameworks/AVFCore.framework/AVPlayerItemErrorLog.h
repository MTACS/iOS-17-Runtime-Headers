
@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLogInternal * _playerItemErrorLog;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) unsigned long long extendedLogDataStringEncoding;

- (id)_common_init;
- (id)_errorLogArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)events;
- (id)extendedLogData;
- (unsigned long long)extendedLogDataStringEncoding;
- (id)init;
- (id)initWithLogArray:(id)arg1;

@end
