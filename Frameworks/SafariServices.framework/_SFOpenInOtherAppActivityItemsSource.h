
@interface _SFOpenInOtherAppActivityItemsSource : NSObject <UIActivityItemsSource> {
    NSURL * _fileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)initWithFilePath:(id)arg1;

@end
