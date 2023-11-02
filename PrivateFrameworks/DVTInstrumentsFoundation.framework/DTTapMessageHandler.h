
@interface DTTapMessageHandler : NSObject {
    DTTapConfig * _config;
}

@property (nonatomic, readonly, retain) DTTapConfig *config;

- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg1;
- (id)messageReceived:(id)arg1;
- (void)stop;

@end
