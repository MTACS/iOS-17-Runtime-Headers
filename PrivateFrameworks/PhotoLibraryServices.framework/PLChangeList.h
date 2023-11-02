
@interface PLChangeList : NSObject {
    NSMutableSet * _deleted;
    NSMutableSet * _inserted;
    NSMutableSet * _updated;
}

@property (nonatomic, retain) NSMutableSet *deleted;
@property (nonatomic, retain) NSMutableSet *inserted;
@property (nonatomic, retain) NSMutableSet *updated;

- (void).cxx_destruct;
- (void)cleanupState;
- (id)deleted;
- (id)inserted;
- (void)setDeleted:(id)arg1;
- (void)setInserted:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)updated;

@end
