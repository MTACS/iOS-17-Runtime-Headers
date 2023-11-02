
@interface PGHolidayDateSummarizedFeature : NSObject <PGSummarizedFeature> {
    NSString * _holidayName;
    NSSet * _intervalsPresent;
    bool  _isMandatoryForKeyAsset;
    unsigned short  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *holidayName;
@property (nonatomic, readonly) NSSet *intervalsPresent;
@property (nonatomic, readonly) bool isMandatoryForKeyAsset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned short type;

- (void).cxx_destruct;
- (id)holidayName;
- (id)initWithIntervalsPresent:(id)arg1 isMandatoryForKeyAsset:(bool)arg2 holidayName:(id)arg3;
- (id)intervalsPresent;
- (bool)isMandatoryForKeyAsset;
- (unsigned short)type;

@end
