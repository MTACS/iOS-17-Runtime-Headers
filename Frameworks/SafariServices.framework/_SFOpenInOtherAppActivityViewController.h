
@interface _SFOpenInOtherAppActivityViewController : _SFActivityViewController {
    NSString * _filePath;
}

@property (nonatomic, retain) NSString *filePath;

+ (id)_activityItemsForFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;
+ (id)_applicationsForDocumentProxy:(id)arg1;
+ (bool)canOpenWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;

- (void).cxx_destruct;
- (void)_prepareActivity:(id)arg1;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;
- (void)setFilePath:(id)arg1;

@end
