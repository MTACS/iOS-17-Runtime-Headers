
@interface SIRINLUSystemGaveOptions : NSObject <SIRINLUSystemDialogAct> {
    NSArray * _choices;
    NSString * renderedText;
}

@property (nonatomic, retain) NSArray *choices;
@property (nonatomic, retain) NSString *renderedText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)choices;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChoices:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)renderedText;
- (void)setChoices:(id)arg1;
- (void)setRenderedText:(id)arg1;

@end
