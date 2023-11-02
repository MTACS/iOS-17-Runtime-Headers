
@interface PGMeaningSummarizedFeature : NSObject <PGSummarizedFeature> {
    NSSet * _intervalsPresent;
    bool  _isMandatoryForKeyAsset;
    NSString * _meaningLabel;
    unsigned short  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *intervalsPresent;
@property (nonatomic, readonly) bool isMandatoryForKeyAsset;
@property (nonatomic, readonly) NSString *meaningLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned short type;

- (void).cxx_destruct;
- (id)initWithIntervalsPresent:(id)arg1 isMandatoryForKeyAsset:(bool)arg2 meaningLabel:(id)arg3;
- (id)intervalsPresent;
- (bool)isMandatoryForKeyAsset;
- (id)meaningLabel;
- (unsigned short)type;

@end
