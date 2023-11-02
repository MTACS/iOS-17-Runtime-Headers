
@interface RCPFilePath : NSObject {
    unsigned long long  _endTimestamp;
    bool  _finished;
    struct CGPath { } * _path;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long endTimestamp;
@property (nonatomic) bool finished;
@property (nonatomic) struct CGPath { }*path;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)endTimestamp;
- (bool)finished;
- (struct CGPath { }*)path;
- (void)setEndTimestamp:(unsigned long long)arg1;
- (void)setFinished:(bool)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
