
@interface BUOSStateHandler : NSObject {
    unsigned long long  _osStateHandle;
}

@property (nonatomic) unsigned long long osStateHandle;

- (void)dealloc;
- (id)initWithTitle:(id)arg1 block:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (unsigned long long)osStateHandle;
- (void)setOsStateHandle:(unsigned long long)arg1;

@end
