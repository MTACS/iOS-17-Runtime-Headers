
@protocol CKSharedContentsCollectionViewCellDelegate <NSObject>

@required

- (void)performAction:(SEL)arg1 forSharedContentsCollectionViewCell:(CKSharedContentsCollectionViewCell *)arg2;
- (void)sharedContentsCollectionViewCellDidTap:(CKSharedContentsCollectionViewCell *)arg1;

@end
