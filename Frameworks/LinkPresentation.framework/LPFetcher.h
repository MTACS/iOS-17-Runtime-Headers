
@interface LPFetcher : NSObject {
    LPEvent * _event;
    unsigned int  _loggingID;
    id  _userData;
}

@property (nonatomic, retain) LPEvent *_event;
@property (nonatomic, readonly) unsigned int _loggingID;
@property (nonatomic, retain) id userData;

- (void).cxx_destruct;
- (id)_event;
- (unsigned int)_loggingID;
- (void)cancel;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)setUserData:(id)arg1;
- (void)set_event:(id)arg1;
- (id)userData;

@end
