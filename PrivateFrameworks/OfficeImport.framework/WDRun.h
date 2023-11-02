
@interface WDRun : NSObject {
    WDParagraph * mParagraph;
}

@property (readonly) WDParagraph *paragraph;

- (void).cxx_destruct;
- (void)clearProperties;
- (id)description;
- (id)init;
- (id)initWithParagraph:(id)arg1;
- (bool)isEmpty;
- (id)paragraph;
- (int)runType;

@end
