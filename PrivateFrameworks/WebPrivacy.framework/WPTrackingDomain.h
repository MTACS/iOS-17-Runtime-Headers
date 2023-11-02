
@interface WPTrackingDomain : NSObject {
    bool  _canBlock;
    NSString * _host;
    NSString * _owner;
}

@property (nonatomic, readonly) bool canBlock;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSString *owner;

- (void).cxx_destruct;
- (bool)canBlock;
- (id)host;
- (id)initWithHost:(id)arg1 owner:(id)arg2 canBlock:(bool)arg3;
- (id)owner;

@end
