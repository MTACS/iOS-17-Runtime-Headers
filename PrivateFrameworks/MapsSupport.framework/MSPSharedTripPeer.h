
@interface MSPSharedTripPeer : NSObject {
    bool  _canControlReceiving;
    bool  _canControlSharing;
}

@property (nonatomic, readonly) bool canControlReceiving;
@property (nonatomic, readonly) bool canControlSharing;

- (bool)canControlReceiving;
- (bool)canControlSharing;
- (id)initWithConnection:(id)arg1;

@end
