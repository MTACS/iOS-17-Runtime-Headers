
@interface TMLUIControlActionTarget : NSObject {
    unsigned long long  _controlEvent;
    NSString * _signalName;
}

- (void).cxx_destruct;
- (void)controlAction:(id)arg1 forEvent:(id)arg2;
- (id)initWithSignal:(id)arg1 controlEvent:(unsigned long long)arg2;

@end
