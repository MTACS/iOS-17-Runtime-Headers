
@interface OspreyService : NSObject {
    <OspreyRPC> * _channel;
}

@property (nonatomic, readonly) <OspreyRPC> *channel;

- (void).cxx_destruct;
- (id)channel;
- (id)initWithConnectionConfiguration:(id)arg1;
- (id)initWithConnectionURL:(id)arg1;

@end
