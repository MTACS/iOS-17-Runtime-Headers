
@interface SKDiskImageResizeParams : NSObject {
    bool  _shallow;
    unsigned long long  _size;
    bool  _stdinPassPhrase;
}

@property (nonatomic) bool shallow;
@property (nonatomic) unsigned long long size;
@property (nonatomic) bool stdinPassPhrase;

- (id)initWithSize:(unsigned long long)arg1;
- (void)setShallow:(bool)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStdinPassPhrase:(bool)arg1;
- (bool)shallow;
- (unsigned long long)size;
- (bool)stdinPassPhrase;

@end
