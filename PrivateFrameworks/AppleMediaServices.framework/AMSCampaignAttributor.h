
@interface AMSCampaignAttributor : NSObject {
    void account;
    void bag;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (id)init;
- (id)initWithBag:(id)arg1;
- (void)processURL:(void *)arg1 ignoreMarketing:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 20: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setAccount:(id)arg1;

@end
