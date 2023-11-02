
@interface SUUIEditorialComponent : SUUIPageComponent {
    NSString * _bodyText;
    NSArray * _links;
    long long  _maximumBodyLines;
    struct SUUIEditorialStyle { 
        long long alignment; 
        long long bodyFontWeight; 
        float bodyFontSize; 
        float linkSpacing; 
        long long titleFontWeight; 
        float titleFontSize; 
        float titleSpacing; 
    }  _style;
    NSString * _titleText;
    bool  _usesLockupTitle;
}

@property (getter=_usesLockupTitle, nonatomic, readonly) bool _usesLockupTitle;
@property (nonatomic, readonly) NSAttributedString *bodyAttributedText;
@property (nonatomic, readonly) NSString *bodyText;
@property (nonatomic, readonly) struct SUUIEditorialStyle { long long x1; long long x2; float x3; float x4; long long x5; float x6; float x7; } editorialStyle;
@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) long long maximumBodyLines;
@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) SUUILabelViewElement *viewElement;

- (void).cxx_destruct;
- (void)_setTitleText:(id)arg1;
- (bool)_usesLockupTitle;
- (id)bodyAttributedText;
- (id)bodyText;
- (long long)componentType;
- (struct SUUIEditorialStyle { long long x1; long long x2; float x3; float x4; long long x5; float x6; float x7; })editorialStyle;
- (id)initWithBrickRoomText:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithUberText:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)links;
- (long long)maximumBodyLines;
- (id)titleText;

@end
