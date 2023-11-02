
@interface CNVCard30PHOTOHelper : NSObject {
    unsigned long long  _maxBytes;
    CNVCardWritingOptions * _options;
    <CNVCardPerson> * _person;
}

@property (nonatomic, readonly) unsigned long long maxBytes;
@property (nonatomic, readonly) CNVCardWritingOptions *options;
@property (nonatomic, readonly) <CNVCardPerson> *person;

+ (id)log;

- (void).cxx_destruct;
- (id)bestEffortImage;
- (id)compressImage:(id)arg1 allowableCompressions:(id)arg2;
- (id)description;
- (id)image;
- (id)init;
- (id)initWithPerson:(id)arg1 options:(id)arg2 maximumDataLength:(unsigned long long)arg3;
- (id)largeImage;
- (void)logBestEfforImageIfNonNil:(id)arg1;
- (unsigned long long)maxBytes;
- (id)options;
- (id)person;
- (id)scaleImage:(id)arg1 toFit:(struct CGSize { double x1; double x2; })arg2 allowableCompressionQuality:(id)arg3;
- (id)scaleImage:(id)arg1 toFitSizes:(id)arg2 allowableCompressionQuality:(id)arg3;

@end
