
@interface THAButtonEvent : NSObject {
    THAButton * _button;
    unsigned long long  _state;
    double  _timestamp;
}

@property (nonatomic, retain) THAButton *button;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)button;
- (id)serialize;
- (void)setButton:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned long long)state;
- (double)timestamp;

@end
