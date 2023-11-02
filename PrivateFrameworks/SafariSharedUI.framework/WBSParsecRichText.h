
@interface WBSParsecRichText : WBSParsecModel {
    WBSParsecImageRepresentation * _contentAdvisoryImage;
    NSString * _contentAdvisoryString;
    NSArray * _formattedTextList;
    NSNumber * _maximumLines;
    NSArray * _moreGlyphRepresentations;
    NSString * _text;
}

@property (nonatomic, readonly) NSString *contentAdvisoryString;
@property (nonatomic, readonly) NSArray *formattedTextList;
@property (nonatomic, readonly) NSNumber *maximumLines;
@property (nonatomic, readonly) NSArray *moreGlyphRepresentations;
@property (nonatomic, readonly) NSString *text;

+ (id)schema;

- (void).cxx_destruct;
- (id)contentAdvisoryImageWithSession:(id)arg1;
- (id)contentAdvisoryString;
- (id)formattedTextList;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maximumLines;
- (id)moreGlyphRepresentations;
- (id)moreGlyphsWithSession:(id)arg1;
- (id)text;

@end
