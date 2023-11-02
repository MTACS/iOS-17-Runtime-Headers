
@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController <ASCLockupViewDelegate> {
    ASCLockupView * _lockupView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ASCLockupView *lockupView;
@property (readonly) Class superclass;

+ (id)lockupCache;
+ (id)lockupViewGroup;
+ (id)storeIdentifierForRowModel:(id)arg1;
+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (id)lockupView;
- (void)lockupViewDidFinishRequest:(id)arg1;
- (void)lockupViewDidInvalidateIntrinsicContentSize:(id)arg1;
- (id)metricsActivityForLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)setLockupView:(id)arg1;
- (id)setupView;
- (void)tlk_updateForAppearance:(id)arg1;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end
