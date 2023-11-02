
@interface PencilEducationElementData : NSObject {
    NSString * _languageID;
    NSString * _placeholderTextContent;
    NSString * _subtitle;
    NSString * _textContent;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, retain) NSString *languageID;
@property (nonatomic, retain) NSString *placeholderTextContent;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *textContent;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long type;

+ (id)elementDataForType:(long long)arg1 languageID:(id)arg2;
+ (id)prefixForElementType:(long long)arg1;

- (void).cxx_destruct;
- (id)languageID;
- (id)placeholderTextContent;
- (void)setLanguageID:(id)arg1;
- (void)setPlaceholderTextContent:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextContent:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (id)subtitle;
- (id)textContent;
- (id)title;
- (long long)type;

@end
