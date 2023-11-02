
@interface _MFRecipientCollection : NSObject {
    NSMutableArray * _bcc;
    NSMutableArray * _cc;
    NSMutableArray * _to;
}

@property (nonatomic, readonly, copy) NSArray *bccRecipientStrings;
@property (nonatomic, readonly, copy) NSArray *bccRecipients;
@property (nonatomic, readonly, copy) NSArray *ccRecipientStrings;
@property (nonatomic, readonly, copy) NSArray *ccRecipients;
@property (nonatomic, readonly, copy) NSArray *toRecipientStrings;
@property (nonatomic, readonly, copy) NSArray *toRecipients;

- (void).cxx_destruct;
- (void)addBCCRecipient:(id)arg1;
- (void)addBCCRecipientWithAddress:(id)arg1 displayName:(id)arg2;
- (void)addCCRecipient:(id)arg1;
- (void)addCCRecipientWithAddress:(id)arg1 displayName:(id)arg2;
- (void)addToRecipient:(id)arg1;
- (void)addToRecipientWithAddress:(id)arg1 displayName:(id)arg2;
- (id)bccRecipientStrings;
- (id)bccRecipients;
- (id)ccRecipientStrings;
- (id)ccRecipients;
- (id)init;
- (id)toRecipientStrings;
- (id)toRecipients;

@end
