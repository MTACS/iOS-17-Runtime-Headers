
@interface SKSoundBuffer : NSObject {
    unsigned int  _bufferId;
    double  _duration;
    NSString * _path;
}

@property (nonatomic, readonly) unsigned int bufferId;
@property (nonatomic, readonly) double duration;

+ (id)bufferWithFileNamed:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)bufferId;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)init;

@end
