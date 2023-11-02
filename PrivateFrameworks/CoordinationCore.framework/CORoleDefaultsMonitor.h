
@interface CORoleDefaultsMonitor : NSObject {
    NSUserDefaults * _SoundBoardDefaults;
    <CORoleDefaultsMonitorDelegate> * _delegate;
    unsigned long long  _result;
}

@property (nonatomic, readonly) NSUserDefaults *SoundBoardDefaults;
@property (nonatomic, readonly) <CORoleDefaultsMonitorDelegate> *delegate;
@property (nonatomic) unsigned long long result;

- (void).cxx_destruct;
- (id)SoundBoardDefaults;
- (unsigned long long)_getCurrentResult;
- (void)_notifyDelegate:(unsigned long long)arg1;
- (void)_updateState;
- (void)activate;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)result;
- (void)setResult:(unsigned long long)arg1;

@end
