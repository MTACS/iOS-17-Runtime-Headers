
@protocol AFClockItemStorageDelegate <NSObject>

@required

- (void)clockItemStorageDidUpdate:(AFClockItemStorage *)arg1 insertedItemIDs:(NSSet *)arg2 updatedItemIDs:(NSSet *)arg3 deletedItemIDs:(NSSet *)arg4;

@end
