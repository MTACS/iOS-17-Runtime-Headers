
@interface DKDAAPParserContainer : NSObject {
    unsigned int  _code;
    unsigned int  _length;
    unsigned int  _remaining;
}

@property (nonatomic) unsigned int code;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int remaining;

- (unsigned int)code;
- (unsigned int)length;
- (unsigned int)remaining;
- (void)setCode:(unsigned int)arg1;
- (void)setLength:(unsigned int)arg1;
- (void)setRemaining:(unsigned int)arg1;

@end
