
@interface DSHardwareButtonEventHandler : NSObject {
    SEL  _action;
    unsigned long long  _events;
    bool  _preventPropagation;
    id  _target;
}

@property (nonatomic) SEL action;
@property (nonatomic) unsigned long long events;
@property (nonatomic) bool preventPropagation;
@property (nonatomic, retain) id target;

- (void).cxx_destruct;
- (SEL)action;
- (unsigned long long)events;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandler:(id)arg1;
- (bool)preventPropagation;
- (void)setAction:(SEL)arg1;
- (void)setEvents:(unsigned long long)arg1;
- (void)setPreventPropagation:(bool)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
