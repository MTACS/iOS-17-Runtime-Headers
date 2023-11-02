
@interface PLLocalCreationDateCreator : NSObject {
    PFTimeZoneLookup * _timeZoneLookup;
}

@property (nonatomic, readonly) PFTimeZoneLookup *timeZoneLookup;

+ (id)_gmtTranslationDictionary;
+ (void)initialize;

- (void).cxx_destruct;
- (id)generateInferredTimeZoneOffsetForAsset:(id)arg1;
- (id)initWithTimeZoneLookup:(id)arg1;
- (id)timeZoneLookup;

@end
