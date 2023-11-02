
@interface SKDiskImageResizeLimitsParams : NSObject {
    bool  _shallow;
    bool  _stdinPassPhrase;
}

@property (nonatomic) bool shallow;
@property (nonatomic) bool stdinPassPhrase;

- (id)init;
- (void)setShallow:(bool)arg1;
- (void)setStdinPassPhrase:(bool)arg1;
- (bool)shallow;
- (bool)stdinPassPhrase;

@end
