
@interface MPCMediaRemoteCommandOperation : MPAsyncOperation {
    unsigned long long  _options;
    MPCPlayerCommandRequest * _request;
    NSDate * _sendDate;
    MPCPlayerCommandStatus * _status;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) MPCPlayerCommandRequest *request;
@property (nonatomic, readonly) NSDate *sendDate;
@property (nonatomic, readonly) MPCPlayerCommandStatus *status;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithCommandRequest:(id)arg1 options:(unsigned long long)arg2 sendDate:(id)arg3;
- (unsigned long long)options;
- (void)performLibraryFavoriteEntityChangeRequestFor:(id)arg1 withFavoriteEntityChangeRequestAction:(long long)arg2 completion:(id /* block */)arg3;
- (id)request;
- (id)sendDate;
- (id)status;

@end
