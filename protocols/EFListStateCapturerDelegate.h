
@protocol EFListStateCapturerDelegate <NSObject>

@required

- (NSString *)descriptionForItem:(id)arg1;
- (NSArray *)itemsForStateCaptureWithErrorString:(id*)arg1;
- (NSString *)labelForStateCapture;

@end
