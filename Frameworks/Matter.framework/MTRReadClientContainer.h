
@interface MTRReadClientContainer : NSObject {
    unsigned long long  _deviceID;
    struct EventPathParams { unsigned int x1; unsigned int x2; unsigned short x3; bool x4; } * _eventPathParams;
    struct AttributePathParams { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; } * _pathParams;
    void * _readClientPtr;
}

@property (nonatomic) unsigned long long deviceID;
@property (nonatomic) struct EventPathParams { unsigned int x1; unsigned int x2; unsigned short x3; bool x4; }*eventPathParams;
@property (nonatomic) struct AttributePathParams { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; }*pathParams;
@property (nonatomic) void*readClientPtr;

- (void)dealloc;
- (unsigned long long)deviceID;
- (struct EventPathParams { unsigned int x1; unsigned int x2; unsigned short x3; bool x4; }*)eventPathParams;
- (void)onDone;
- (struct AttributePathParams { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)pathParams;
- (void*)readClientPtr;
- (void)setDeviceID:(unsigned long long)arg1;
- (void)setEventPathParams:(struct EventPathParams { unsigned int x1; unsigned int x2; unsigned short x3; bool x4; }*)arg1;
- (void)setPathParams:(struct AttributePathParams { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)arg1;
- (void)setReadClientPtr:(void*)arg1;

@end
