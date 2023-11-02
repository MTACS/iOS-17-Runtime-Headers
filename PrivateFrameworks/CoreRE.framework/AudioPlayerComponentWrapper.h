
@interface AudioPlayerComponentWrapper : NSObject {
    void * _component;
}

@property (nonatomic) void*component;

- (void*)component;
- (id)initWithComponent:(void*)arg1;
- (void)setComponent:(void*)arg1;

@end
