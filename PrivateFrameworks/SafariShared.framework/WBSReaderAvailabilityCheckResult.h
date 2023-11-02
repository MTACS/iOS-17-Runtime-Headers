
@interface WBSReaderAvailabilityCheckResult : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _canonicalURL;
    bool  _doesPageUseSearchEngineOptimizationMetadata;
    bool  _isSameDocumentNavigation;
    bool  _readerAvailable;
    NSArray * _textSamples;
}

@property (nonatomic, copy) NSURL *canonicalURL;
@property (nonatomic) bool doesPageUseSearchEngineOptimizationMetadata;
@property (nonatomic) bool isSameDocumentNavigation;
@property (getter=isReaderAvailable, nonatomic) bool readerAvailable;
@property (nonatomic, copy) NSArray *textSamples;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)doesPageUseSearchEngineOptimizationMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isReaderAvailable;
- (bool)isSameDocumentNavigation;
- (void)setCanonicalURL:(id)arg1;
- (void)setDoesPageUseSearchEngineOptimizationMetadata:(bool)arg1;
- (void)setIsSameDocumentNavigation:(bool)arg1;
- (void)setReaderAvailable:(bool)arg1;
- (void)setTextSamples:(id)arg1;
- (id)textSamples;

@end
