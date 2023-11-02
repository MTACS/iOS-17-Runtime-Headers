
@interface MKFeaturePayload : NSObject {
    unsigned long long  _count;
    bool  _enabled;
    NSDecimalNumber * _importElapsedTime;
    unsigned long long  _size;
    NSString * _state;
    unsigned long long  _totalElapsedTime;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSDecimalNumber *importElapsedTime;
@property (nonatomic) unsigned long long size;
@property (nonatomic, copy) NSString *state;
@property (nonatomic) unsigned long long totalElapsedTime;

- (void).cxx_destruct;
- (unsigned long long)count;
- (bool)enabled;
- (id)importElapsedTime;
- (id)init;
- (void)setCount:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImportElapsedTime:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setState:(id)arg1;
- (void)setTotalElapsedTime:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)state;
- (unsigned long long)totalElapsedTime;

@end
