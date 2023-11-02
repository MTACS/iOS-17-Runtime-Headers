
@interface CACVoiceOverAnnouncement : NSObject {
    id /* block */  _completion;
    NSString * _message;
    long long  _type;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithMessage:(id)arg1 type:(long long)arg2 completion:(id /* block */)arg3;
- (id)message;
- (long long)type;

@end
