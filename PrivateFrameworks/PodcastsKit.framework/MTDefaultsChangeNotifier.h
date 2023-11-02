
@interface MTDefaultsChangeNotifier : MTDictionaryDiff {
    NSUserDefaults * _defaults;
    bool  _running;
}

@property (nonatomic, retain) NSUserDefaults *defaults;
@property (getter=isRunning, nonatomic) bool running;

- (void).cxx_destruct;
- (void)_defaultsChanged;
- (void)dealloc;
- (id)defaults;
- (id)initWithProperties:(id)arg1 defaults:(id)arg2;
- (bool)isRunning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDefaults:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)start;
- (void)stop;

@end
