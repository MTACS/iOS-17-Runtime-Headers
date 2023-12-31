
@interface IKPlayerPlaybackErrorEventUserInfo : NSObject <IKPlayerEventMarshaling> {
    NSError * _error;
    bool  _shouldStopDueToError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) bool shouldStopDueToError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)error;
- (id)initWithError:(id)arg1 shouldStopDueToError:(bool)arg2;
- (id)properties;
- (bool)shouldStopDueToError;

@end
