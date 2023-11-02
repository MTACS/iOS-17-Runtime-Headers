
@protocol BCSAction <NSObject>

@required

- (NSArray *)actionPickerItems;
- (NSString *)defaultActionTargetApplicationBundleIdentifier;
- (<BCSActionDelegate> *)delegate;
- (NSString *)localizedActionDescription;
- (NSString *)localizedDefaultActionDescription;
- (NSString *)localizedDefaultActionTitle;
- (void)performAction;
- (void)performDefaultAction;
- (void)setDelegate:(id <BCSActionDelegate>)arg1;
- (void)showActionPicker;
- (NSURL *)urlThatCanBeOpened;

@optional

- (void)performDefaultActionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
