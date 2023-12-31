
@interface NUWidgetDevice : NSObject <NUDevice>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSplitScreen, nonatomic, readonly) bool splitScreen;
@property (readonly) Class superclass;

- (bool)isSplitScreen;

@end
