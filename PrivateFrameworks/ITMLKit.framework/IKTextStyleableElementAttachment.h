
@interface IKTextStyleableElementAttachment : NSObject {
    IKTextElement * _textElement;
}

@property (nonatomic, readonly) IKTextElement *textElement;

- (void).cxx_destruct;
- (id)initWithTextElement:(id)arg1;
- (id)textElement;

@end
