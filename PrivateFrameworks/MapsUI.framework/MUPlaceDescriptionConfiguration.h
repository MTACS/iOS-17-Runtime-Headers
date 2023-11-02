
@interface MUPlaceDescriptionConfiguration : NSObject {
    GEOMapItemAttribution * _attribution;
    bool  _showSectionTitle;
    NSString * _textBlockText;
    NSString * _titleText;
}

@property (nonatomic, readonly) GEOMapItemAttribution *attribution;
@property (nonatomic) bool showSectionTitle;
@property (nonatomic, readonly) NSString *textBlockText;
@property (nonatomic, readonly) NSString *titleText;

+ (id)configurationWithEncyclopedicInfo:(id)arg1;

- (void).cxx_destruct;
- (id)attribution;
- (id)initWithTitle:(id)arg1 descriptionText:(id)arg2 attribution:(id)arg3;
- (void)setShowSectionTitle:(bool)arg1;
- (bool)showSectionTitle;
- (id)textBlockText;
- (id)titleText;

@end
