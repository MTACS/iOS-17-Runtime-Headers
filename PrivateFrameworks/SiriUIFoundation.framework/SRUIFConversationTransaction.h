
@interface SRUIFConversationTransaction : NSObject {
    NSArray * _insertedItemIndexPaths;
    NSArray * _presentationStateChangedItemIndexPaths;
    NSArray * _updatedItemIndexPaths;
}

@property (nonatomic, readonly) NSArray *insertedItemIndexPaths;
@property (nonatomic, readonly) NSArray *presentationStateChangedItemIndexPaths;
@property (nonatomic, readonly) NSArray *updatedItemIndexPaths;

- (void).cxx_destruct;
- (id)initWithUpdatedItemIndexPaths:(id)arg1 insertedItemIndexPaths:(id)arg2 presentationStateChangedItemIndexPaths:(id)arg3;
- (id)insertedItemIndexPaths;
- (id)presentationStateChangedItemIndexPaths;
- (id)updatedItemIndexPaths;

@end
