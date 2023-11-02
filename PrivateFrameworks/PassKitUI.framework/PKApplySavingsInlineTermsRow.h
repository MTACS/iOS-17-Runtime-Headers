
@interface PKApplySavingsInlineTermsRow : NSObject <PKApplyCollectionViewRow> {
    PKApplyFooterContent * _content;
    <PKApplyInlineFooterSectionControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (void)didTapFooterLink:(id)arg1;
- (id)identifier;
- (id)initWithContent:(id)arg1 delegate:(id)arg2;

@end
