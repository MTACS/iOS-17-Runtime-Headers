
@interface CNUILikenessRenderingScope : NSObject <CNAvatarImageRenderingScopeInternal> {
    unsigned long long  _backgroundStyle;
    PRMonogramColor * _color;
    bool  _excludePointSizeInEqualityCheck;
    NSIndexSet * _maskedAvatarIndices;
    struct CGSize { 
        double width; 
        double height; 
    }  _pointSize;
    bool  _rightToLeft;
    double  _scale;
    struct CGColor { } * _strokeColor;
    double  _strokeWidth;
    unsigned long long  _style;
}

@property (nonatomic, readonly) unsigned long long backgroundStyle;
@property (nonatomic, readonly) PRMonogramColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool excludePointSizeInEqualityCheck;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexSet *maskedAvatarIndices;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pointSize;
@property (nonatomic, readonly) bool rightToLeft;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGColor { }*strokeColor;
@property (nonatomic, readonly) double strokeWidth;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)renderingScopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 rightToLeft:(bool)arg3 style:(unsigned long long)arg4 color:(id)arg5;
+ (id)renderingScopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor { }*)arg4 rightToLeft:(bool)arg5 style:(unsigned long long)arg6 backgroundStyle:(unsigned long long)arg7 color:(id)arg8 maskedAvatarIndices:(id)arg9;
+ (id)renderingScopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor { }*)arg4 rightToLeft:(bool)arg5 style:(unsigned long long)arg6 color:(id)arg7;

- (void).cxx_destruct;
- (unsigned long long)backgroundStyle;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)excludePointSizeInEqualityCheck;
- (unsigned long long)hash;
- (id)initWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(struct CGColor { }*)arg4 rightToLeft:(bool)arg5 style:(unsigned long long)arg6 backgroundStyle:(unsigned long long)arg7 color:(id)arg8 maskedAvatarIndices:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)maskedAvatarIndices;
- (struct CGSize { double x1; double x2; })pointSize;
- (bool)rightToLeft;
- (double)scale;
- (void)setExcludePointSizeInEqualityCheck:(bool)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)strokeColor;
- (double)strokeWidth;
- (unsigned long long)style;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (unsigned long long)avatarViewBackgroundStyle;
- (unsigned long long)avatarViewStyle;
- (id)likenessRenderingScope;

@end
