
@interface VIACacheHitEvent : NSObject <VIAEvent> {
    VIACacheHitContext * _context;
}

@property (nonatomic, readonly) unsigned long long cachedResultQueryID;
@property (nonatomic, readonly) VIACacheHitContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *engagementSuggestionType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *originatingApplication;
@property (nonatomic, readonly) unsigned long long queryID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)cachedResultQueryID;
- (id)context;
- (id)engagementSuggestionType;
- (id)feedback;
- (id)initWithContext:(id)arg1;
- (id)originatingApplication;
- (unsigned long long)queryID;

@end
