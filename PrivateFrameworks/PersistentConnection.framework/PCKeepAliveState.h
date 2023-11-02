
@interface PCKeepAliveState : NSObject {
    unsigned char  _state;
    unsigned char  _subState;
}

@property (nonatomic) unsigned char state;
@property (nonatomic) unsigned char subState;

- (id)initWithKeepAliveState:(unsigned char)arg1 subState:(unsigned char)arg2;
- (void)setState:(unsigned char)arg1;
- (void)setSubState:(unsigned char)arg1;
- (unsigned char)state;
- (unsigned char)subState;

@end
