
@interface SXPresentableMail : NSObject {
    NSString * _recipient;
    NSString * _subject;
}

@property (nonatomic, readonly) NSString *recipient;
@property (nonatomic, readonly) NSString *subject;

- (void).cxx_destruct;
- (id)initWithRecipient:(id)arg1 subject:(id)arg2;
- (id)recipient;
- (id)subject;

@end
