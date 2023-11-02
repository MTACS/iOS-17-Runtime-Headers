
@interface ATXModeServerRequestHandler : NSObject {
    id /* block */  _modeDidChange;
}

@property (nonatomic, copy) id /* block */ modeDidChange;

- (void).cxx_destruct;
- (id /* block */)modeDidChange;
- (void)modeDidChange:(unsigned long long)arg1;
- (void)setModeDidChange:(id /* block */)arg1;

@end
