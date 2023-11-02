
@interface CAXPBContextualActionsFeedbackEvent : PBCodable <NSCopying> {
    CAXPBPredictionContext * _deviceContext;
    CAXPBContextualAction * _selectedAction;
    NSString * _sessionIdentifier;
    CAXPBSuggestion * _suggestion;
}

@property (nonatomic, retain) CAXPBPredictionContext *deviceContext;
@property (nonatomic, readonly) bool hasDeviceContext;
@property (nonatomic, readonly) bool hasSelectedAction;
@property (nonatomic, readonly) bool hasSessionIdentifier;
@property (nonatomic, readonly) bool hasSuggestion;
@property (nonatomic, retain) CAXPBContextualAction *selectedAction;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic, retain) CAXPBSuggestion *suggestion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceContext;
- (id)dictionaryRepresentation;
- (bool)hasDeviceContext;
- (bool)hasSelectedAction;
- (bool)hasSessionIdentifier;
- (bool)hasSuggestion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)selectedAction;
- (id)sessionIdentifier;
- (void)setDeviceContext:(id)arg1;
- (void)setSelectedAction:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;
- (void)writeTo:(id)arg1;

@end
