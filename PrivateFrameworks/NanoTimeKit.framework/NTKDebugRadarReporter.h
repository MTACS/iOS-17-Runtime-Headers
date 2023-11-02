
@interface NTKDebugRadarReporter : NSObject {
    NSMutableArray * _additionalInformationStrings;
    NSString * _alertMessage;
    NSString * _alertTitle;
    NSMutableArray * _attachmentURLs;
    NSString * _radarTitle;
    NSURL * _temporaryDirectoryURLToCleanup;
}

@property (nonatomic, retain) NSMutableArray *additionalInformationStrings;
@property (nonatomic, copy) NSString *alertMessage;
@property (nonatomic, copy) NSString *alertTitle;
@property (nonatomic, retain) NSMutableArray *attachmentURLs;
@property (nonatomic, copy) NSString *radarTitle;
@property (nonatomic, retain) NSURL *temporaryDirectoryURLToCleanup;

+ (bool)_archiveDirectory:(id)arg1 toFile:(id)arg2;

- (void).cxx_destruct;
- (bool)addAttachmentAtURL:(id)arg1 error:(id*)arg2;
- (id)additionalInformationStrings;
- (id)alertMessage;
- (id)alertTitle;
- (void)appendInformationToDescription:(id)arg1;
- (id)attachmentURLs;
- (id)initWithRadarTitle:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3;
- (bool)present;
- (id)radarTitle;
- (void)setAdditionalInformationStrings:(id)arg1;
- (void)setAlertMessage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setAttachmentURLs:(id)arg1;
- (void)setRadarTitle:(id)arg1;
- (void)setTemporaryDirectoryURLToCleanup:(id)arg1;
- (id)temporaryDirectoryURLToCleanup;

@end
