
@interface _NSTextElementLocation : NSCountableTextLocation {
    <NSTextLocation> * _baseLocation;
    long long  _offset;
    NSTextElement * _textElement;
}

@property (readonly) <NSTextLocation> *baseLocation;
@property (readonly) long long offset;
@property NSTextElement *textElement;

- (id)baseLocation;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)initWithTextElement:(id)arg1 baseLocation:(id)arg2 offset:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextLocation:(id)arg1;
- (long long)offset;
- (void)setTextElement:(id)arg1;
- (id)textElement;
- (void)updateBaseLocation;

@end
