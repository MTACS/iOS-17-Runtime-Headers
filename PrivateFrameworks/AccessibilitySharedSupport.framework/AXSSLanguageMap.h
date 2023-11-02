
@interface AXSSLanguageMap : NSObject {
    NSArray * _alternateLanguageIDs;
    bool  _ambiguous;
    NSArray * _associatedAmbiguousLanguages;
    AXSSDialectMap * _defaultDialect;
    NSArray * _dialects;
    NSString * _generalLanguageID;
    bool  _rtl;
    AXSSDialectMap * _userLocaleDialect;
    bool  _western;
}

@property (nonatomic, retain) NSArray *alternateLanguageIDs;
@property (getter=isAmbiguous, nonatomic) bool ambiguous;
@property (nonatomic, retain) NSArray *associatedAmbiguousLanguages;
@property (nonatomic, retain) AXSSDialectMap *defaultDialect;
@property (nonatomic, retain) NSArray *dialects;
@property (nonatomic, copy) NSString *generalLanguageID;
@property (getter=isRTL, nonatomic) bool rtl;
@property (nonatomic, retain) AXSSDialectMap *userLocaleDialect;
@property (getter=isWestern, nonatomic) bool western;

- (void).cxx_destruct;
- (id)alternateLanguageIDs;
- (id)associatedAmbiguousLanguages;
- (id)defaultDialect;
- (id)description;
- (id)dialectWithLocaleIdentifier:(id)arg1;
- (id)dialects;
- (id)generalLanguageID;
- (id)initWithLanguageID:(id)arg1 isWestern:(bool)arg2 isAmbiguous:(bool)arg3 isRTL:(bool)arg4 dialects:(id)arg5 alternateLanguageIDs:(id)arg6 associatedAmbiguousLanguages:(id)arg7;
- (bool)isAmbiguous;
- (bool)isRTL;
- (bool)isWestern;
- (void)setAlternateLanguageIDs:(id)arg1;
- (void)setAmbiguous:(bool)arg1;
- (void)setAssociatedAmbiguousLanguages:(id)arg1;
- (void)setDefaultDialect:(id)arg1;
- (void)setDialects:(id)arg1;
- (void)setGeneralLanguageID:(id)arg1;
- (void)setRtl:(bool)arg1;
- (void)setUserLocaleDialect:(id)arg1;
- (void)setWestern:(bool)arg1;
- (id)userLocaleDialect;

@end
