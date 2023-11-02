
@interface GKComposeHeaderWithStaticRecipients : GKComposeHeaderField {
    NSArray * _recipientNameStrings;
}

@property (nonatomic, retain) NSArray *recipientNameStrings;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)recipientNameStrings;
- (void)setRecipientNameStrings:(id)arg1;

@end
