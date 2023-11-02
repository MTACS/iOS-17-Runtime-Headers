
@protocol EDSortableMessage <EMObject, EFPubliclyDescribable>

@required

- (NSDate *)date;
- (NSDate *)displayDate;
- (EMReadLater *)readLater;
- (NSDate *)sendLaterDate;

@end
