
@interface ATXPBExecutableReferenceKey : PBCodable <NSCopying> {
    ATXPBAction * _executableAction;
    ATXPBHeroAppPrediction * _executableHeroApp;
    ATXPBInfoSuggestion * _executableInfoSuggestion;
    ATXPBLinkAction * _executableLinkAction;
    NSString * _executableString;
    int  _executableType;
    NSMutableArray * _references;
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
