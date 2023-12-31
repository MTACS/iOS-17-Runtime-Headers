
@interface _UIAutologgingDeallocSentinel : NSObject {
    bool  _called;
    NSString * _message;
}

@property (nonatomic) bool called;
@property (nonatomic, copy) NSString *message;

- (void).cxx_destruct;
- (bool)called;
- (void)dealloc;
- (id)message;
- (void)setCalled:(bool)arg1;
- (void)setMessage:(id)arg1;

@end
