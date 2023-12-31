
@interface SXPresentableMessage : NSObject {
    NSString * _message;
    NSString * _recipient;
}

@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *recipient;

- (void).cxx_destruct;
- (id)initWithRecipient:(id)arg1 message:(id)arg2;
- (id)message;
- (id)recipient;

@end
