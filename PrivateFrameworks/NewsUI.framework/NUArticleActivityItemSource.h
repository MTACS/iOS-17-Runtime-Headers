
@interface NUArticleActivityItemSource : NSObject <UIActivityItemSource> {
    <FCHeadlineProviding> * _headline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)headline;
- (id)initWithHeadline:(id)arg1;

@end
