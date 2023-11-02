
@interface WFContactComposeRecipient : CNComposeRecipient {
    WFContact * _wfContact;
}

@property (nonatomic, readonly) WFContact *wfContact;

- (void).cxx_destruct;
- (id)displayString;
- (id)initWithWFContact:(id)arg1;
- (id)wfContact;
- (id)wf_contactFieldEntry;

@end
