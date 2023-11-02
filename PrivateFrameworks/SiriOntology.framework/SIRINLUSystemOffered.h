
@interface SIRINLUSystemOffered : NSObject <SIRINLUSystemDialogAct> {
    <SIRINLUUserDialogAct> * _offeredAct;
    NSString * renderedText;
}

@property (nonatomic, retain) <SIRINLUUserDialogAct> *offeredAct;
@property (nonatomic, retain) NSString *renderedText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOfferedAct:(id)arg1;
- (id)offeredAct;
- (id)renderedText;
- (void)setOfferedAct:(id)arg1;
- (void)setRenderedText:(id)arg1;

@end
