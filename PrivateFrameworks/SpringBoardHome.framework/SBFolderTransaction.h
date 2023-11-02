
@interface SBFolderTransaction : NSObject {
    NSMutableSet * _addedIcons;
    NSMutableSet * _movedIcons;
    NSMapTable * _removedIcons;
}

@property (nonatomic, readonly, copy) NSSet *addedIcons;
@property (nonatomic, readonly, copy) NSSet *movedIcons;
@property (nonatomic, readonly, copy) NSSet *removedIcons;

- (void).cxx_destruct;
- (id)addedIcons;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (id)movedIcons;
- (id)removedIcons;

@end
