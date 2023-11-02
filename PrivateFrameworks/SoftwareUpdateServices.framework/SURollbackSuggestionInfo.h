
@interface SURollbackSuggestionInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientIdentifier;
    NSArray * _responsibleProcessesInfo;
    unsigned long long  _suggestionReason;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSArray *responsibleProcessesInfo;
@property (nonatomic) unsigned long long suggestionReason;

+ (bool)supportsSecureCoding;

- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)responsibleProcessesInfo;
- (void)setClientIdentifier:(id)arg1;
- (void)setResponsibleProcessesInfo:(id)arg1;
- (void)setSuggestionReason:(unsigned long long)arg1;
- (unsigned long long)suggestionReason;

@end
