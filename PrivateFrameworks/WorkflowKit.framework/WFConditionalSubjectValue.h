
@interface WFConditionalSubjectValue : NSObject <NSSecureCoding> {
    bool  _caseInsensitive;
    unsigned long long  _comparableTimeUnits;
    WFContentCollection * _content;
    long long  _contentType;
}

@property (getter=isCaseInsensitive, nonatomic, readonly) bool caseInsensitive;
@property (nonatomic, readonly) unsigned long long comparableTimeUnits;
@property (nonatomic, readonly) WFContentCollection *content;
@property (nonatomic, readonly) long long contentType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)comparableTimeUnits;
- (id)content;
- (long long)contentType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 contentType:(long long)arg2 caseInsensitive:(bool)arg3 comparableTimeUnits:(unsigned long long)arg4;
- (bool)isCaseInsensitive;

@end
