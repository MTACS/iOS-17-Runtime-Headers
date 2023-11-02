
@interface ATXPBProactiveSuggestionUISpecification : PBCodable <NSCopying> {
    bool  _allowedOnHomeScreen;
    bool  _allowedOnLockscreen;
    bool  _allowedOnSpotlight;
    double  _contextEndDate;
    double  _contextStartDate;
    struct { 
        unsigned int contextEndDate : 1; 
        unsigned int contextStartDate : 1; 
        unsigned int predictionReasons : 1; 
        unsigned int allowedOnHomeScreen : 1; 
        unsigned int allowedOnLockscreen : 1; 
        unsigned int allowedOnSpotlight : 1; 
        unsigned int shouldClearOnEngagement : 1; 
    }  _has;
    unsigned long long  _predictionReasons;
    NSMutableArray * _preferredLayoutConfigs;
    NSString * _reason;
    bool  _shouldClearOnEngagement;
    NSString * _subtitle;
    NSString * _title;
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
