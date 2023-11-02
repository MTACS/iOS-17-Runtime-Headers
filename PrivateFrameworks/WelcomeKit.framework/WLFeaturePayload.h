
@interface WLFeaturePayload : NSObject {
    unsigned long long  _count;
    unsigned long long  _elapsedTime;
    bool  _enabled;
    unsigned long long  _size;
    NSString * _state;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long elapsedTime;
@property (nonatomic) bool enabled;
@property (nonatomic) unsigned long long size;
@property (nonatomic, copy) NSString *state;

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)elapsedTime;
- (bool)enabled;
- (id)init;
- (void)setCount:(unsigned long long)arg1;
- (void)setElapsedTime:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setState:(id)arg1;
- (unsigned long long)size;
- (id)state;

@end
