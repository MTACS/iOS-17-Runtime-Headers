
@protocol UAPasteboardItemProviding <NSObject>

@required

- (void)getDataWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSInputStream *, NSError *, void*
- (void)setType:(NSString *)arg1;
- (void)setUuid:(NSUUID *)arg1;
- (NSString *)type;
- (NSUUID *)uuid;

@end
