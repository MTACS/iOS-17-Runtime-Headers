
@interface BLTPBSelectorItem : NSObject {
    int (* _method;
    SEL  _selector;
}

@property (nonatomic) int (*method;
@property (nonatomic) SEL selector;

- (int (*)method;
- (SEL)selector;
- (void)setMethod:(int (*)arg1;
- (void)setSelector:(SEL)arg1;

@end
