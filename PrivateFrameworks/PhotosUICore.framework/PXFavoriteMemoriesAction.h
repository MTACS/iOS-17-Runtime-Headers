
@interface PXFavoriteMemoriesAction : PXMemoriesAction {
    NSString * _actionSystemImageName;
    bool  _favorite;
    NSString * _localizedActionName;
}

@property (getter=isFavorite, nonatomic, readonly) bool favorite;

+ (bool)currentValueForMemories:(id)arg1;
+ (bool)toggledValueForMemories:(id)arg1;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionSystemImageName;
- (id)initWithMemories:(id)arg1;
- (id)initWithMemories:(id)arg1 favorite:(bool)arg2;
- (bool)isFavorite;
- (id)localizedActionName;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;

@end
