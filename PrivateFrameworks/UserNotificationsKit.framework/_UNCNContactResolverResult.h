
@interface _UNCNContactResolverResult : NSObject <BSDescriptionProviding> {
    NSString * _cnContactFullname;
    NSString * _cnContactIdentifier;
    NSString * _identifierOfMatchLabel;
    unsigned long long  _matchType;
    bool  _matchTypeSuggested;
    bool  _suggestedContact;
}

@property (nonatomic, readonly, copy) NSString *cnContactFullname;
@property (nonatomic, readonly, copy) NSString *cnContactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifierOfMatchLabel;
@property (nonatomic, readonly) unsigned long long matchType;
@property (getter=isMatchTypeSuggested, nonatomic, readonly) bool matchTypeSuggested;
@property (getter=isStrongestMatch, nonatomic, readonly) bool strongestMatch;
@property (getter=isSuggestedContact, nonatomic, readonly) bool suggestedContact;
@property (readonly) Class superclass;

+ (id)resultWithCNContactIdentifier:(id)arg1 cnContactFullname:(id)arg2 suggestedContact:(bool)arg3 matchType:(unsigned long long)arg4 matchTypeSuggested:(bool)arg5 identifierOfMatchLabel:(id)arg6;

- (void).cxx_destruct;
- (id)_initWithCNContactIdentifier:(id)arg1 cnContactFullname:(id)arg2 suggestedContact:(bool)arg3 matchType:(unsigned long long)arg4 matchTypeSuggested:(bool)arg5 identifierOfMatchLabel:(id)arg6;
- (id)_stringForMatchType:(unsigned long long)arg1;
- (id)cnContactFullname;
- (id)cnContactIdentifier;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifierOfMatchLabel;
- (bool)isMatchTypeSuggested;
- (bool)isStrongerMatchThanOtherMatch:(id)arg1;
- (bool)isStrongestMatch;
- (bool)isSuggestedContact;
- (unsigned long long)matchType;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
