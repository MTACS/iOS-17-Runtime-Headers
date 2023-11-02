
@interface XRNetworkingServiceObservationTuple : NSObject {
    unsigned char  _count;
    int  _kind;
    id * data;
}

@property (nonatomic) unsigned char count;
@property (nonatomic) int kind;

- (unsigned char)count;
- (void)dealloc;
- (id)initWithKind:(int)arg1 count:(unsigned char)arg2;
- (id)initWithKind:(int)arg1 count:(unsigned char)arg2 source:(struct __CFDictionary { }*)arg3 indexToKeyMap:(const struct __CFString {}***)arg4;
- (int)kind;
- (void)setCount:(unsigned char)arg1;
- (void)setKind:(int)arg1;

@end
