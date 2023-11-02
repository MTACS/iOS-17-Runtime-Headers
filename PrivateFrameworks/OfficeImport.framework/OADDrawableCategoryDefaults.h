
@interface OADDrawableCategoryDefaults : NSObject {
    OADShapeProperties * mShapeProperties;
    OADTextBodyProperties * mTextBodyProperties;
    OADTextListStyle * mTextListStyle;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDefaults;
- (void)setShapeProperties:(id)arg1;
- (void)setTextBodyProperties:(id)arg1;
- (void)setTextListStyle:(id)arg1;
- (id)shapeProperties;
- (id)textBodyProperties;
- (id)textListStyle;

@end
