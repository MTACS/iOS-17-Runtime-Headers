
@interface NTKComplicationProviderOptions : NSObject <NSCopying> {
    bool  _allowGenericDateComplication;
    NSIndexSet * _allowedComplicationTypes;
    bool  _includeDisabledTypes;
    NSArray * _rankedFamilies;
    NSArray * _supportedDateStyles;
}

@property (nonatomic) bool allowGenericDateComplication;
@property (nonatomic, copy) NSIndexSet *allowedComplicationTypes;
@property (nonatomic) bool includeDisabledTypes;
@property (nonatomic, copy) NSArray *rankedFamilies;
@property (nonatomic, copy) NSArray *supportedDateStyles;

- (void).cxx_destruct;
- (id)_initWithOptions:(id)arg1;
- (bool)allowGenericDateComplication;
- (id)allowedComplicationTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)includeDisabledTypes;
- (id)init;
- (id)rankedFamilies;
- (void)setAllowGenericDateComplication:(bool)arg1;
- (void)setAllowedComplicationTypes:(id)arg1;
- (void)setIncludeDisabledTypes:(bool)arg1;
- (void)setRankedFamilies:(id)arg1;
- (void)setSupportedDateStyles:(id)arg1;
- (id)supportedDateStyles;

@end
