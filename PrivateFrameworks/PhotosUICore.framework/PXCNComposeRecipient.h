
@interface PXCNComposeRecipient : PXRecipient {
    CNComposeRecipient * _recipient;
}

@property (nonatomic, readonly) CNComposeRecipient *recipient;

- (void).cxx_destruct;
- (id)description;
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;
- (id)initWithRecipient:(id)arg1;
- (id)recipient;

@end
