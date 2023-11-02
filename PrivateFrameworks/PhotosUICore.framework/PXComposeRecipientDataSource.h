
@interface PXComposeRecipientDataSource : NSObject {
    NSArray * _composeRecipients;
    NSSet * _recipients;
}

@property (nonatomic, readonly, copy) NSArray *composeRecipients;
@property (nonatomic, copy) NSSet *recipients;

- (void).cxx_destruct;
- (id)composeRecipients;
- (unsigned long long)indexOfComposeRecipientForRecipient:(id)arg1;
- (id)init;
- (id)initWithComposeRecipients:(id)arg1 recipients:(id)arg2;
- (id)recipients;
- (void)setRecipients:(id)arg1;

@end
