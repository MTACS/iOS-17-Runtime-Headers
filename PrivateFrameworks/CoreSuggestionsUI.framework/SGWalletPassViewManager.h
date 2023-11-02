
@interface SGWalletPassViewManager : NSObject {
    PKPass * _pass;
    NSData * _passData;
}

@property (nonatomic, readonly) PKPass *pass;
@property (nonatomic, readonly) NSData *passData;

- (void).cxx_destruct;
- (id)addPassViewController;
- (id)icon;
- (id)initWithData:(id)arg1;
- (id)organizationName;
- (id)pass;
- (id)passData;
- (id)passStyle;
- (double)passTimeInterval;
- (id)passView;
- (id)passes;
- (id)title;

@end
