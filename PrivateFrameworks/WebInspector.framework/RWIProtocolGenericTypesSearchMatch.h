
@interface RWIProtocolGenericTypesSearchMatch : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *lineContent;
@property (nonatomic) double lineNumber;

- (id)initWithLineNumber:(double)arg1 lineContent:(id)arg2;
- (id)lineContent;
- (double)lineNumber;
- (void)setLineContent:(id)arg1;
- (void)setLineNumber:(double)arg1;

@end
