
@interface _PXDisplayLinkWeakReference : NSObject {
    id  _object;
    SEL  _selector;
}

@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) SEL selector;

- (void).cxx_destruct;
- (void)handleDisplayLink:(id)arg1;
- (id)initWithObject:(id)arg1 selector:(SEL)arg2;
- (id)object;
- (SEL)selector;

@end
