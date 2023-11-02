
@interface DYDisplayLinkInterposer : NSObject {
    unsigned long long  _endTimestamp;
    SEL  _sel;
    id  _target;
}

- (void)dealloc;
- (void)forwardDisplayLinkCallback:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end
