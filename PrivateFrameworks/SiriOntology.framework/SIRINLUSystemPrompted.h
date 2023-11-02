
@interface SIRINLUSystemPrompted : NSObject <SIRINLUSystemDialogAct> {
    USOSerializedGraph * _reference;
    NSString * renderedText;
}

@property (nonatomic, retain) USOSerializedGraph *reference;
@property (nonatomic, retain) NSString *renderedText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReference:(id)arg1;
- (id)reference;
- (id)renderedText;
- (void)setReference:(id)arg1;
- (void)setRenderedText:(id)arg1;

@end
