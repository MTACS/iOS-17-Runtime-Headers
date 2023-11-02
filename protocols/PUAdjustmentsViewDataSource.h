
@protocol PUAdjustmentsViewDataSource <NSObject>

@required

- (void)beginInteractiveChange;
- (bool)canModifyAdjustmentAtIndexPath:(NSIndexPath *)arg1;
- (void)endInteractiveChange;
- (PUAdjustmentInfo *)infoForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)modifyValue:(double)arg1 atIndexPath:(NSIndexPath *)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)resetInfoAtIndexPath:(NSIndexPath *)arg1;
- (void)setAdjustmentEnabled:(void *)arg1 atIndexPath:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, NSIndexPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (long long)numberOfItemsInAllSections;

@end
