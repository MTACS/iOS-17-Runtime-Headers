
@interface ATXExecutableReference : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientModelId;
    NSDate * _date;
    bool  _shouldClearOnEngagement;
    bool  _shouldPurge;
    bool  _suggestionIsHidden;
}

@property (nonatomic, readonly, copy) NSString *clientModelId;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) bool shouldClearOnEngagement;
@property (nonatomic) bool shouldPurge;
@property (nonatomic) bool suggestionIsHidden;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientModelId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientModelId:(id)arg1 date:(id)arg2 shouldClearOnEngagement:(bool)arg3;
- (id)initWithClientModelId:(id)arg1 date:(id)arg2 shouldClearOnEngagement:(bool)arg3 shouldPurge:(bool)arg4 suggestionIsHidden:(bool)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDict;
- (void)setShouldPurge:(bool)arg1;
- (void)setSuggestionIsHidden:(bool)arg1;
- (bool)shouldClearOnEngagement;
- (bool)shouldPurge;
- (bool)suggestionIsHidden;
- (void)updateDateTo:(id)arg1;

@end
