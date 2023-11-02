
@interface PGBusinessLocationSummarizedFeature : NSObject <PGSummarizedFeature> {
    PGGraphBusinessNode * _businessNode;
    NSSet * _intervalsPresent;
    bool  _isMandatoryForKeyAsset;
    unsigned short  _type;
}

@property (nonatomic, readonly) PGGraphBusinessNode *businessNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *intervalsPresent;
@property (nonatomic, readonly) bool isMandatoryForKeyAsset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned short type;

- (void).cxx_destruct;
- (id)businessNode;
- (id)initWithIntervalsPresent:(id)arg1 isMandatoryForKeyAsset:(bool)arg2 businessNode:(id)arg3;
- (id)intervalsPresent;
- (bool)isMandatoryForKeyAsset;
- (unsigned short)type;

@end
