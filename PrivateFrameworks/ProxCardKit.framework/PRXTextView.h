
@interface PRXTextView : UITextView <PRXTextContainer> {
    long long  _style;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)textViewWithStyle:(long long)arg1;

- (id)initWithStyle:(long long)arg1;
- (void)setTitleText:(id)arg1;
- (long long)style;

@end
