
@interface ICASCollaborationItemData : NSObject <AADataEventType> {
    ICASCollaborationItemType * _collaborationItemType;
}

@property (nonatomic, readonly) ICASCollaborationItemType *collaborationItemType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)collaborationItemType;
- (id)initWithCollaborationItemType:(id)arg1;
- (id)toDict;

@end
