
@interface SNTestFailure : NSObject {
    NSString * _message;
}

@property (nonatomic, readonly, copy) NSString *message;

- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1;
- (id)initWithMissingClass:(Class)arg1;
- (id)message;

@end
