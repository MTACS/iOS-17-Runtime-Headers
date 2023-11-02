
@interface SBSUserNotificationColorDefinition : NSObject <NSCopying> {
    BSColor * _color;
    NSString * _colorName;
}

@property (nonatomic, readonly, copy) BSColor *color;
@property (nonatomic, readonly, copy) NSString *colorName;
@property (nonatomic, readonly) UIColor *sb_resolvedColor;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

+ (id)definitionWithColor:(id)arg1;
+ (id)definitionWithColorName:(id)arg1;

- (void).cxx_destruct;
- (id)_colorForString:(id)arg1;
- (id)_initWithColorName:(id)arg1 color:(id)arg2;
- (id)_initWithDictionary:(id)arg1;
- (id)_stringForColor:(id)arg1;
- (id)build;
- (id)color;
- (id)colorName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)sb_resolvedColor;

@end
