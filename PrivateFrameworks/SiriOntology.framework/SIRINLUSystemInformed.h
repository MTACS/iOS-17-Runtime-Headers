
@interface SIRINLUSystemInformed : NSObject <SIRINLUSystemDialogAct> {
    NSArray * _entities;
    NSString * renderedText;
}

@property (nonatomic, retain) NSArray *entities;
@property (nonatomic, retain) NSString *renderedText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntities:(id)arg1;
- (id)renderedText;
- (void)setEntities:(id)arg1;
- (void)setRenderedText:(id)arg1;

@end
