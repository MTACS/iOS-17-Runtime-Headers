
@interface SAUIButton : SAAceView

@property (nonatomic, retain) SAUIColor *backgroundColor;
@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) SAUIColor *textColor;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)button;
+ (id)buttonWithDictionary:(id)arg1 context:(id)arg2;

- (id)backgroundColor;
- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)secondaryText;
- (void)setBackgroundColor:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;
- (id)textColor;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (bool)sruif_hasButton;

@end
