
@interface _REContextRegistration : NSObject {
    id /* block */  _callback;
    <_CDUserContext> * _context;
    REDuetContextQuery * _query;
    bool  _registered;
    NSArray * _registrations;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) <_CDUserContext> *context;
@property (nonatomic, readonly) REDuetContextQuery *query;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_evaluateQueryWithRegistration:(bool)arg1;
- (id /* block */)callback;
- (id)context;
- (void)dealloc;
- (void)deregisterWithContext;
- (void)evaluateQuery;
- (id)initWithQuery:(id)arg1;
- (id)query;
- (void)registerWithContext;
- (void)setCallback:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (id)uuid;

@end
