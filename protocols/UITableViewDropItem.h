
@protocol UITableViewDropItem <NSObject>

@required

- (UIDragItem *)dragItem;
- (struct CGSize { double x1; double x2; })previewSize;
- (NSIndexPath *)sourceIndexPath;

@end
