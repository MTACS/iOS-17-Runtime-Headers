
@protocol CRCard <NSObject, NSSecureCoding, NSCopying, CRContent>

@required

- (unsigned long long)cardFormat;
- (NSString *)cardIdentifier;
- (NSArray *)cardSections;
- (NSArray *)dismissalCommands;
- (NSSet *)interactions;

@optional

- (bool)asynchronous;
- (SFCard *)backingCard;
- (bool)flexibleSectionOrder;
- (void)loadCardWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CRCard> *, void*

@end
