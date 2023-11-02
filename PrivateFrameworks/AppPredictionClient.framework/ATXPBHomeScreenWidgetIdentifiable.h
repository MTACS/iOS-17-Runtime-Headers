
@interface ATXPBHomeScreenWidgetIdentifiable : PBCodable <NSCopying> {
    NSString * _appBundleId;
    NSString * _extensionBundleId;
    struct { 
        unsigned int score : 1; 
        unsigned int size : 1; 
        unsigned int onboardingWidget : 1; 
        unsigned int suggestedWidget : 1; 
    }  _has;
    NSData * _intent;
    bool  _onboardingWidget;
    NSString * _predictionSource;
    double  _score;
    int  _size;
    bool  _suggestedWidget;
    NSString * _widgetKind;
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
