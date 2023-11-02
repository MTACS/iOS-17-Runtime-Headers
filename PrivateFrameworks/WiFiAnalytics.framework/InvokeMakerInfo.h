
@interface InvokeMakerInfo : NSObject {
    SEL  _selector;
    id  _target;
}

@property (nonatomic) SEL selector;
@property (nonatomic, retain) id target;

- (void).cxx_destruct;
- (id)initWithSel:(SEL)arg1 andTarget:(id)arg2;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
