
@interface DocumentUnderstanding.DUDocumentUIElement : NSObject <NSCopying, NSSecureCoding> {
    void absoluteOriginOnScreen;
    void classDescriptor;
    void fontSize;
    void frameInWindow;
    void isOnScreen;
    void isValidForContentExtraction;
    void range;
    void styleProperties;
    void superviewClassIndices;
    void superviewClassNames;
    void text;
    void version;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } absoluteOriginOnScreen;
@property (nonatomic, copy) NSString *classDescriptor;
@property (nonatomic) float fontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInWindow;
@property (nonatomic) bool isOnScreen;
@property (nonatomic) bool isValidForContentExtraction;
@property (nonatomic, copy) NSArray *range;
@property (nonatomic, copy) NSDictionary *styleProperties;
@property (nonatomic, copy) NSArray *superviewClassIndices;
@property (nonatomic, copy) NSArray *superviewClassNames;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *version;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })absoluteOriginOnScreen;
- (id)classDescriptor;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)fontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isOnScreen;
- (bool)isValidForContentExtraction;
- (id)range;
- (void)setAbsoluteOriginOnScreen:(struct CGPoint { double x1; double x2; })arg1;
- (void)setClassDescriptor:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsOnScreen:(bool)arg1;
- (void)setIsValidForContentExtraction:(bool)arg1;
- (void)setRange:(id)arg1;
- (void)setStyleProperties:(id)arg1;
- (void)setSuperviewClassIndices:(id)arg1;
- (void)setSuperviewClassNames:(id)arg1;
- (void)setText:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)styleProperties;
- (id)superviewClassIndices;
- (id)superviewClassNames;
- (id)text;
- (id)version;

@end
