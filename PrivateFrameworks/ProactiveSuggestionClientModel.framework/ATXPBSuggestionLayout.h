
@interface ATXPBSuggestionLayout : PBCodable <NSCopying> {
    bool  _confidenceWarrantsSnappingOrNPlusOne;
    NSMutableArray * _fourByEightSuggestions;
    NSMutableArray * _fourByFourSuggestions;
    struct { 
        unsigned int layoutScore : 1; 
        unsigned int numWidgetsInStack : 1; 
        unsigned int layoutType : 1; 
        unsigned int confidenceWarrantsSnappingOrNPlusOne : 1; 
        unsigned int isLowConfidenceStackRotationForStaleStack : 1; 
        unsigned int isNPlusOne : 1; 
        unsigned int isValidForSuggestionsWidget : 1; 
    }  _has;
    bool  _isLowConfidenceStackRotationForStaleStack;
    bool  _isNPlusOne;
    bool  _isValidForSuggestionsWidget;
    double  _layoutScore;
    int  _layoutType;
    unsigned long long  _numWidgetsInStack;
    NSMutableArray * _oneByFourSuggestions;
    NSMutableArray * _oneByOneSuggestions;
    NSMutableArray * _oneByTwoSuggestions;
    NSMutableArray * _twoByFourSuggestions;
    NSMutableArray * _twoByTwoSuggestions;
    NSString * _uuidOfHighestConfidenceSuggestion;
    NSString * _uuidString;
    NSString * _widgetUniqueId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
