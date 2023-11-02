
@interface CNContactGeminiIconProvider : NSObject {
    NSDictionary * _geminiIconDictionary;
    CNGeminiResult * _geminiResult;
}

@property (nonatomic, retain) NSDictionary *geminiIconDictionary;
@property (nonatomic, retain) CNGeminiResult *geminiResult;

- (void).cxx_destruct;
- (bool)_checkAvailableGeminiChannelsUpdatedForGeminiResult:(id)arg1;
- (id)_simLabelImageWithLocalizedBadgeLabel:(id)arg1;
- (id)geminiIconDictionary;
- (id)geminiIconForGeminiChannelIdentifier:(id)arg1;
- (id)geminiResult;
- (void)setGeminiIconDictionary:(id)arg1;
- (void)setGeminiResult:(id)arg1;
- (void)updateGeminiIcons;

@end
