
@interface CalDAVLogScrubber : NSObject {
    <CADDiagnosticLogContext> * _context;
    NSURL * _inputURL;
    NSURL * _outputURL;
    NSMutableArray * _urlsToCleanUp;
}

@property (nonatomic, retain) <CADDiagnosticLogContext> *context;
@property (nonatomic, retain) NSURL *inputURL;
@property (nonatomic, retain) NSURL *outputURL;

+ (id)log;
+ (bool)redactLog:(id)arg1 toOutputFile:(id)arg2 context:(id)arg3;
+ (void)setSortICSDocuments:(bool)arg1;
+ (bool)sortICSDocuments;

- (void).cxx_destruct;
- (void)cleanUp;
- (void)compressFileAt:(id)arg1 to:(id)arg2;
- (id)context;
- (id)decompressedInputFile;
- (id)init;
- (id)inputURL;
- (id)outputURL;
- (bool)scrub;
- (void)setContext:(id)arg1;
- (void)setInputURL:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (id)temporaryUncompressedFile;

@end
