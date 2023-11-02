
@interface TCTaggedMessage : NSObject {
    int  mMessageTag;
    NSString * mMessageText;
}

@property (nonatomic, readonly) int messageTag;
@property (nonatomic, readonly, copy) NSString *messageText;

+ (id)taggedMessageWithMessageText:(id)arg1;

- (void).cxx_destruct;
- (id)initWithMessageText:(id)arg1;
- (int)messageTag;
- (id)messageText;

@end
