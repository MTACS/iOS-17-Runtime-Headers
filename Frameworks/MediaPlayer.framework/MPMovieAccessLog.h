
@interface MPMovieAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLog * _accessLog;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) NSData *extendedLogData;
@property (nonatomic, readonly) unsigned long long extendedLogDataStringEncoding;

- (void).cxx_destruct;
- (id)_initWithAVItemAccessLog:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)events;
- (id)extendedLogData;
- (unsigned long long)extendedLogDataStringEncoding;

@end
