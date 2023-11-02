
@interface CoreDAVAction : NSObject <CoreDAVChangeContextHolding> {
    int  _action;
    id  _changeContext;
    id  _context;
    bool  _ignoresGuardianRestrictions;
}

@property (nonatomic, readonly) int action;
@property (nonatomic, retain) id changeContext;
@property (nonatomic, readonly) id context;
@property (nonatomic) bool ignoresGuardianRestrictions;

- (void).cxx_destruct;
- (int)action;
- (id)changeContext;
- (id)context;
- (id)description;
- (bool)ignoresGuardianRestrictions;
- (id)initWithAction:(int)arg1 context:(id)arg2;
- (void)setChangeContext:(id)arg1;
- (void)setIgnoresGuardianRestrictions:(bool)arg1;

@end
