
@interface INParameterCombination : NSObject <INCodableCoding, INWidgetPlistRepresentable, NSSecureCoding> {
    INCodableLocalizationTable * _localizationTable;
    bool  _primary;
    NSString * _subtitleFormatString;
    NSString * _subtitleFormatStringLocID;
    bool  _supportsBackgroundExecution;
    NSString * _titleFormatString;
    NSString * _titleFormatStringLocID;
}

@property (setter=_setLocalizationTable:, nonatomic, copy) INCodableLocalizationTable *_localizationTable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedSubtitleFormatString;
@property (nonatomic, readonly, copy) NSString *localizedTitleFormatString;
@property (getter=isPrimary, nonatomic) bool primary;
@property (nonatomic, copy) NSString *subtitleFormatString;
@property (nonatomic, copy) NSString *subtitleFormatStringLocID;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsBackgroundExecution;
@property (nonatomic, copy) NSString *titleFormatString;
@property (nonatomic, copy) NSString *titleFormatStringLocID;

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_localizationTable;
- (void)_setLocalizationTable:(id)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPrimary;
- (id)localizedSubtitleFormatString;
- (id)localizedSubtitleFormatStringWithLocalizer:(id)arg1;
- (id)localizedTitleFormatString;
- (id)localizedTitleFormatStringWithLocalizer:(id)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setSubtitleFormatString:(id)arg1;
- (void)setSubtitleFormatStringLocID:(id)arg1;
- (void)setSupportsBackgroundExecution:(bool)arg1;
- (void)setTitleFormatString:(id)arg1;
- (void)setTitleFormatStringLocID:(id)arg1;
- (id)subtitleFormatString;
- (id)subtitleFormatStringLocID;
- (bool)supportsBackgroundExecution;
- (id)titleFormatString;
- (id)titleFormatStringLocID;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

@end
