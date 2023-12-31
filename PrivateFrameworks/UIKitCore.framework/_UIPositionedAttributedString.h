
@interface _UIPositionedAttributedString : NSObject {
    UITextPosition * _position;
    NSAttributedString * _string;
}

@property (nonatomic, readonly) UITextPosition *position;
@property (nonatomic, readonly, copy) NSAttributedString *string;

+ (id)attributedString:(id)arg1 atPosition:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)position;
- (id)string;

@end
