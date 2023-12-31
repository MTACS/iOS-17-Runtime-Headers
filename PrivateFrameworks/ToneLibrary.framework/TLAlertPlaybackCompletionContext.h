
@interface TLAlertPlaybackCompletionContext : NSObject {
    id /* block */  _completionHandler;
    NSError * _error;
    long long  _playbackCompletionType;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) long long playbackCompletionType;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)description;
- (id)error;
- (long long)playbackCompletionType;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setPlaybackCompletionType:(long long)arg1;

@end
