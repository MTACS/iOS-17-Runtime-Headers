
@interface FPFileManagerFixPermDelegate : NSObject <NSFileManagerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)fileManager:(id)arg1 shouldRemoveItemAtURL:(id)arg2;

@end
