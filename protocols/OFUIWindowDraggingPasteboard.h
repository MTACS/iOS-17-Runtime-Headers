
@protocol OFUIWindowDraggingPasteboard <NSObject>

@required

- (NSDictionary *)pasteboardItem;

@optional

+ (id)itemWithPasteboardItem:(id)arg1;
+ (id)objectForPasteboadItem:(id)arg1;

@end
