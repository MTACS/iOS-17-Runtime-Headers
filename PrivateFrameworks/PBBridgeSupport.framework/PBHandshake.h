
@interface PBHandshake : NSObject {
    unsigned int  _position;
    unsigned int  _state;
    unsigned int  _version;
}

@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int version;

- (id)description;
- (unsigned int)position;
- (void)setPosition:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)state;
- (unsigned int)version;

@end
