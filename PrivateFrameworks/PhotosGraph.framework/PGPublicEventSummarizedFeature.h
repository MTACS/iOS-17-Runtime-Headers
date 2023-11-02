
@interface PGPublicEventSummarizedFeature : NSObject <PGSummarizedFeature> {
    NSSet * _intervalsPresent;
    bool  _isMandatoryForKeyAsset;
    NSString * _publicEventLabel;
    unsigned short  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *intervalsPresent;
@property (nonatomic, readonly) bool isMandatoryForKeyAsset;
@property (nonatomic, readonly) NSString *publicEventLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned short type;

- (void).cxx_destruct;
- (id)initWithIntervalsPresent:(id)arg1 isMandatoryForKeyAsset:(bool)arg2 publicEventLabel:(id)arg3;
- (id)intervalsPresent;
- (bool)isMandatoryForKeyAsset;
- (id)publicEventLabel;
- (unsigned short)type;

@end
