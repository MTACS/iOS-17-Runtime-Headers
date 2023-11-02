
@interface VKCTranslatedParagraph : NSObject {
    bool  _isPassthrough;
    VKQuad * _quad;
    NSString * _text;
}

@property (nonatomic, readonly) bool isPassthrough;
@property (nonatomic, readonly) VKQuad *quad;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)initWithText:(id)arg1 quad:(id)arg2 isPassthrough:(bool)arg3;
- (bool)isPassthrough;
- (id)quad;
- (id)text;

@end
