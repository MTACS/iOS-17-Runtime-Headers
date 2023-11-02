
@interface _HUPinCodeActivityItemSource : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment> {
    HFPinCodeItem * _pinCodeItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFPinCodeItem *pinCodeItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithPinCodeItem:(id)arg1;
- (id)pinCodeItem;
- (void)setPinCodeItem:(id)arg1;

@end
