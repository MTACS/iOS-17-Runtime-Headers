
@interface CKAttributionViewControllerDataModel : NSObject {
    CKMessagePartChatItem * _chatItem;
    NSArray * _modelObjects;
}

@property (nonatomic, readonly) CKMessagePartChatItem *chatItem;
@property (nonatomic, readonly) long long modelObjectCount;
@property (nonatomic, readonly) NSArray *modelObjects;

- (void).cxx_destruct;
- (id)_dataModelWithAggregatedObjects:(id)arg1;
- (id)_dataModelWithSingleObjects:(id)arg1;
- (id)_identifiersToSentItemsMap:(id)arg1;
- (long long)_visibleCount:(id)arg1;
- (id)chatItem;
- (id)initWithMessagePartChatItem:(id)arg1;
- (long long)modelObjectCount;
- (id)modelObjects;

@end
