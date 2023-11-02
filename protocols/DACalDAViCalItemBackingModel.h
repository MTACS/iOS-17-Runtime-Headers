
@protocol DACalDAViCalItemBackingModel <NSObject>

@required

- (NSString *)daCalendarItemUniqueIdentifier;
- (NSString *)externalModificationTag;
- (REMObjectID *)objectID;
- (<DACalDAViCalItemUpdatableBackingModel> *)updatableBackingModel;

@end
