
@interface UIPrinter : NSObject {
    id  _printerInfo;
    NSDictionary * _printerInfoDict;
    NSURL * _url_;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *displayLocation;
@property (readonly, copy) NSString *displayName;
@property (readonly) NSArray *finishingTemplates;
@property (readonly) NSArray *loadedPapers;
@property (readonly, copy) NSString *makeAndModel;
@property (readonly) NSArray *outputBins;
@property (readonly) NSArray *printerFinishingOptions;
@property (retain) NSDictionary *printerInfoDict;
@property (readonly) long long supportedJobTypes;
@property (readonly) NSArray *supportedMediaTypes;
@property (readonly) NSArray *supportedPapers;
@property (readonly) NSArray *supportedPresets;
@property (readonly) NSArray *supportedQualities;
@property (readonly) NSArray *supportedTrays;
@property (readonly) bool supportsColor;
@property (readonly) bool supportsDuplex;

+ (id)printerWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithPrinter:(id)arg1;
- (id)_initWithURL:(id)arg1;
- (id)_internalPrinter;
- (id)_printerID;
- (void)contactPrinter:(id /* block */)arg1;
- (id)displayLocation;
- (id)displayName;
- (id)finishingTemplates;
- (id)init;
- (long long)jobAccountIDSupport;
- (void)loadPrinterInfoDict;
- (id)loadedPapers;
- (id)makeAndModel;
- (id)outputBins;
- (id)printerFinishingOptions;
- (id)printerInfoDict;
- (void)setPrinterInfoDict:(id)arg1;
- (void)set_internalPrinter:(id)arg1;
- (long long)supportedJobTypes;
- (id)supportedMediaTypes;
- (id)supportedPapers;
- (id)supportedPresets;
- (id)supportedQualities;
- (id)supportedTrays;
- (bool)supportsColor;
- (bool)supportsDuplex;
- (bool)supportsJobAccountID;

@end
