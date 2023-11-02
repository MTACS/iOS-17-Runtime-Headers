
@protocol CNComposeRecipientTableViewCellDelegate <NSObject>

@required

- (void)didTapDisambiguationChevronForCell:(CNComposeRecipientTableViewCell *)arg1;
- (void)didTapInfoButtonForCell:(CNComposeRecipientTableViewCell *)arg1;
- (bool)willProvideOverrideImageDataForCell:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 7: CNComposeRecipientTableViewCell *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*

@end
