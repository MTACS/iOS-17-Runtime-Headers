
@interface WFPasteboardItem : NSObject {
    NSArray * _fileURLs;
    NSDictionary * _itemsByType;
}

@property (nonatomic, readonly) NSArray *fileURLItems;
@property (nonatomic, readonly) NSArray *fileURLs;
@property (nonatomic, readonly) NSDictionary *itemsByType;

- (void).cxx_destruct;
- (id)fileURLItems;
- (id)fileURLs;
- (id)initWithItemsByType:(id)arg1 fileURLs:(id)arg2;
- (id)itemsByType;

@end
