
@interface CKContextUIElement : NSObject <NSCopying, NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _absoluteOriginOnScreen;
    NSString * _className;
    float  _density;
    float  _fontSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameInWindow;
    bool  _onScreen;
    NSString * _sceneIdentifier;
    NSArray * _superviewClassNames;
    NSString * _text;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } absoluteOriginOnScreen;
@property (nonatomic, retain) NSString *className;
@property (nonatomic) float density;
@property (nonatomic) float fontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInWindow;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, retain) NSString *sceneIdentifier;
@property (nonatomic, retain) NSArray *superviewClassNames;
@property (nonatomic, retain) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })absoluteOriginOnScreen;
- (id)className;
- (long long)compareByPosition:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)density;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)fontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInWindow;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 className:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOnScreen;
- (id)sceneIdentifier;
- (void)setAbsoluteOriginOnScreen:(struct CGPoint { double x1; double x2; })arg1;
- (void)setClassName:(id)arg1;
- (void)setDensity:(float)arg1;
- (void)setFontSize:(float)arg1;
- (void)setFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSuperviewClassNames:(id)arg1;
- (void)setText:(id)arg1;
- (id)superviewClassNames;
- (id)text;
- (id)toJSONSerializableDictionary;

@end
