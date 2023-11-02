
@interface _MPCQueueControllerBehaviorPodcastsIdentifierComponents : NSObject <MPCQueueControllerItemIdentifierComponents> {
    void contentItemID;
    void isPlaceholder;
    void itemID;
    void sectionID;
}

@property (nonatomic, readonly) unsigned short behaviorFlags;
@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, copy) NSString *sectionID;

- (void).cxx_destruct;
- (unsigned short)behaviorFlags;
- (id)contentItemID;
- (id)init;
- (bool)isPlaceholder;
- (id)itemID;
- (id)sectionID;
- (void)setContentItemID:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setSectionID:(id)arg1;

@end
