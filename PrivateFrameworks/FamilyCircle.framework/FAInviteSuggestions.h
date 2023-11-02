
@interface FAInviteSuggestions : NSObject <FAInviteSuggesterProtocol> {
    _PSPredictionContext * _context;
    NSArray * _suggestions;
}

@property (nonatomic, retain) _PSPredictionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *suggestions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)fetchFamilyMemberSuggestions;
- (long long)fetchSuggestedInviteTransportForContactId:(id)arg1 contactHandles:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;

@end
