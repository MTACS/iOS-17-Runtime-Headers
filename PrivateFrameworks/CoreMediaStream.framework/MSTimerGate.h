
@interface MSTimerGate : NSObject {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

- (void)disable;
- (void)enable;
- (bool)enabled;
- (id)init;
- (void)setEnabled:(bool)arg1;

@end
