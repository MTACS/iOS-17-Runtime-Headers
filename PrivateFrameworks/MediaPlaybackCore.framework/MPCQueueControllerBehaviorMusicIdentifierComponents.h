
@interface MPCQueueControllerBehaviorMusicIdentifierComponents : NSObject <NSCopying, NSObject> {
    unsigned short  _behaviorFlags;
    NSString * _contentItemID;
    NSString * _deferredNextContentItemID;
    NSString * _itemID;
    NSString * _itemSpecificContentItemID;
    NSString * _loadingSectionID;
    long long  _repeatIteration;
    NSString * _sectionID;
    long long  _type;
}

@property (nonatomic, readonly) unsigned short behaviorFlags;
@property (nonatomic, readonly, copy) NSString *contentItemID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *deferredNextContentItemID;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly, copy) NSString *itemSpecificContentItemID;
@property (nonatomic, readonly, copy) NSString *loadingSectionID;
@property (nonatomic, readonly) long long repeatIteration;
@property (nonatomic, readonly, copy) NSString *sectionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) unsigned long long uid;

+ (id)itemComponentsWithSectionID:(id)arg1 itemID:(id)arg2;
+ (id)placeholderComponentsWithLoadingSectionID:(id)arg1;

- (void).cxx_destruct;
- (id)_copy;
- (id)_initWithContentItemID:(id)arg1 sectionID:(id)arg2 itemID:(id)arg3 repeatIteration:(long long)arg4 type:(long long)arg5 loadingSectionID:(id)arg6 itemSpecificContentItemID:(id)arg7 deferredNextContentItemID:(id)arg8;
- (unsigned short)behaviorFlags;
- (id)contentItemID;
- (id)copyAsDeferredWithLoadingSectionID:(id)arg1;
- (id)copyAsPlaceholder;
- (id)copyWithBehaviorFlags:(unsigned short)arg1;
- (id)copyWithRepeatIteration:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deferredNextContentItemID;
- (id)description;
- (bool)isPlaceholder;
- (id)itemID;
- (id)itemSpecificContentItemID;
- (id)loadingSectionID;
- (long long)repeatIteration;
- (id)sectionID;
- (long long)type;
- (unsigned long long)uid;

@end
