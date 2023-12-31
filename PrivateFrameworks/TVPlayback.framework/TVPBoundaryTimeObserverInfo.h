
@interface TVPBoundaryTimeObserverInfo : NSObject {
    id /* block */  _handler;
    NSArray * _times;
    id  _tokenFromAVPlayer;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSArray *times;
@property (nonatomic, retain) id tokenFromAVPlayer;

- (void).cxx_destruct;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void)setTimes:(id)arg1;
- (void)setTokenFromAVPlayer:(id)arg1;
- (id)times;
- (id)tokenFromAVPlayer;

@end
