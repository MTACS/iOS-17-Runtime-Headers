
@interface PKJob : NSObject {
    NSString * _PIN;
    NSString * _jobHeldUntil;
    NSString * _jobPrinterStateMessage;
    NSArray * _jobPrinterStateReasons;
    NSString * _jobStateMessage;
    NSArray * _jobStateReasons;
    long long  _localJobID;
    long long  _mediaProgress;
    long long  _mediaSheets;
    long long  _mediaSheetsCompleted;
    NSString * _printerDisplayName;
    long long  _printerKind;
    NSString * _printerLocation;
    long long  _remoteJobId;
    PKPrintSettings * _settings;
    long long  _state;
    NSData * _thumbnailImage;
    NSDate * _timeAtCompleted;
    NSDate * _timeAtCreation;
    NSDate * _timeAtProcessing;
}

@property (readonly) NSString *PIN;
@property (readonly) NSString *jobHeldUntil;
@property (readonly) NSString *jobPrinterStateMessage;
@property (readonly) NSArray *jobPrinterStateReasons;
@property (readonly) NSString *jobStateMessage;
@property (readonly) NSArray *jobStateReasons;
@property (readonly) long long localJobID;
@property (readonly) NSString *localizedJobOptions;
@property (readonly) NSString *localizedStatusString;
@property (readonly) long long mediaProgress;
@property (readonly) long long mediaSheets;
@property (readonly) long long mediaSheetsCompleted;
@property (readonly) long long number;
@property (readonly) NSString *printerDisplayName;
@property (readonly) long long printerKind;
@property (readonly) NSString *printerLocation;
@property (readonly) long long remoteJobId;
@property (readonly) PKPrintSettings *settings;
@property (readonly) long long state;
@property (readonly) NSData *thumbnailImage;
@property (readonly) NSDate *timeAtCompleted;
@property (readonly) NSDate *timeAtCreation;
@property (readonly) NSDate *timeAtProcessing;

+ (id)currentJob;
+ (void)currentJobCompletionHandler:(id /* block */)arg1;
+ (id)jobs;
+ (void)jobsCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)PIN;
- (void)_updateStateFromParameters:(const struct Printd_Job_Parameters { id x1; }*)arg1;
- (void)cancel;
- (id)description;
- (id)initWithJobParameters:(const struct Printd_Job_Parameters { id x1; }*)arg1;
- (id)jobHeldUntil;
- (id)jobPrinterStateMessage;
- (id)jobPrinterStateReasons;
- (id)jobStateMessage;
- (id)jobStateReasons;
- (long long)localJobID;
- (id)localizedJobOptions;
- (id)localizedStatusString;
- (long long)mediaProgress;
- (long long)mediaSheets;
- (long long)mediaSheetsCompleted;
- (long long)number;
- (id)printerDisplayName;
- (long long)printerKind;
- (id)printerLocation;
- (long long)remoteJobId;
- (id)settings;
- (long long)state;
- (id)thumbnailImage;
- (id)timeAtCompleted;
- (id)timeAtCreation;
- (id)timeAtProcessing;
- (long long)update;
- (void)updateCompletionHandler:(id /* block */)arg1;

@end
