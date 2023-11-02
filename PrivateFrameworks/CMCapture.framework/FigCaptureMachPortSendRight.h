
@interface FigCaptureMachPortSendRight : NSObject {
    bool  _invalid;
    unsigned int  _port;
}

@property (nonatomic, readonly) unsigned int port;

- (void)dealloc;
- (id)description;
- (id)initWithPort:(unsigned int)arg1;
- (void)invalidate;
- (unsigned int)port;

@end
