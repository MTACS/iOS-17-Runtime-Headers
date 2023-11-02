
@interface MFPhotoPickerProgressManager : NSObject {
    NSMutableDictionary * _progressItems;
}

@property (nonatomic, readonly) NSMutableDictionary *progressItems;

- (void).cxx_destruct;
- (void)_cancelProgressItem:(id)arg1;
- (bool)anyRequestExists;
- (void)cancelEverything;
- (void)cancelEverythingAtIndexPath:(id)arg1;
- (id)init;
- (double)progressForIndexPath:(id)arg1;
- (id)progressItems;
- (bool)requestExistsForIndexPath:(id)arg1;
- (void)setExportSession:(id)arg1 forIndexPath:(id)arg2;
- (void)setImageRequestID:(int)arg1 forIndexPath:(id)arg2;
- (void)setProgress:(double)arg1 forIndexPath:(id)arg2;

@end
