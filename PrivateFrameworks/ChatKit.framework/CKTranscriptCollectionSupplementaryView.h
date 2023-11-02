
@interface CKTranscriptCollectionSupplementaryView : UICollectionReusableView <CKTranscriptSupplementaryViewProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKindForGUID:(id)arg1;
+ (id)supplementaryViewKindPrefix;

- (void)configureForChatItem:(id)arg1 context:(id)arg2;

@end
