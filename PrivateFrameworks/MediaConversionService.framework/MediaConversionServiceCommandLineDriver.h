
@interface MediaConversionServiceCommandLineDriver : NSObject {
    NSMutableArray * _conversionOptionSets;
    NSProgress * _conversionProgress;
    PAImageConversionServiceClient * _imageConversionServiceClient;
    bool  _launchServiceAtStart;
    bool  _pauseAfterLaunchingService;
    bool  _pauseAtStart;
    bool  _replaceExistingOutput;
    bool  _showProgress;
    bool  _verbose;
    PAVideoConversionServiceClient * _videoConversionServiceClient;
    bool  _waitForSignalAfterCompletion;
}

@property (retain) NSMutableArray *conversionOptionSets;
@property (retain) NSProgress *conversionProgress;
@property (retain) PAImageConversionServiceClient *imageConversionServiceClient;
@property bool launchServiceAtStart;
@property bool pauseAfterLaunchingService;
@property bool pauseAtStart;
@property bool replaceExistingOutput;
@property bool showProgress;
@property bool verbose;
@property (retain) PAVideoConversionServiceClient *videoConversionServiceClient;
@property bool waitForSignalAfterCompletion;

+ (struct option { char *x1; int x2; int *x3; int x4; }*)longopts;
+ (const char *)optstring;
+ (void)output:(id)arg1;
+ (void)outputConversionError:(id)arg1 status:(long long)arg2;
+ (void)outputError:(id)arg1;
+ (bool)outputJSONDataForConversionOutputInformation:(id)arg1;
+ (id)replacementObjectForObject:(id)arg1 valueConversionHandler:(id /* block */)arg2;
+ (id)usage;
+ (id)usagesummary;

- (void).cxx_destruct;
- (id)conversionOptionSets;
- (id)conversionProgress;
- (bool)hasConversionOfType:(id)arg1;
- (id)imageConversionServiceClient;
- (id)init;
- (bool)launchServiceAtStart;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)pauseAfterLaunchingService;
- (bool)pauseAtStart;
- (bool)processOption:(int)arg1 arg:(id)arg2;
- (bool)replaceExistingOutput;
- (int)run;
- (int)runImageConversionWithConversionOptionSet:(id)arg1;
- (int)runVideoConversionWithConversionOptionSet:(id)arg1;
- (int)runVideoStillExtractionConversionWithConversionOptionSet:(id)arg1;
- (void)sendMessageToLaunchService;
- (void)setConversionOptionSets:(id)arg1;
- (void)setConversionProgress:(id)arg1;
- (void)setImageConversionServiceClient:(id)arg1;
- (void)setLaunchServiceAtStart:(bool)arg1;
- (void)setPauseAfterLaunchingService:(bool)arg1;
- (void)setPauseAtStart:(bool)arg1;
- (void)setReplaceExistingOutput:(bool)arg1;
- (void)setShowProgress:(bool)arg1;
- (void)setVerbose:(bool)arg1;
- (void)setVideoConversionServiceClient:(id)arg1;
- (void)setWaitForSignalAfterCompletion:(bool)arg1;
- (bool)showProgress;
- (int)validateAndProcessArgumentValues;
- (bool)verbose;
- (id)videoConversionServiceClient;
- (void)waitForSigInt;
- (bool)waitForSignalAfterCompletion;

@end
