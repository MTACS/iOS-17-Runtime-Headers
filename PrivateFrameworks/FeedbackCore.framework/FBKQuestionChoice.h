
@interface FBKQuestionChoice : NSObject <NSSecureCoding> {
    bool  _canSelect;
    NSString * _title;
    id  _value;
}

@property bool canSelect;
@property (getter=isPrompt, readonly) bool prompt;
@property (readonly) NSString *title;
@property (readonly) id value;

+ (id)choiceFromArray:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canSelect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 value:(id)arg2;
- (bool)isPrompt;
- (void)setCanSelect:(bool)arg1;
- (id)title;
- (id)value;

@end
