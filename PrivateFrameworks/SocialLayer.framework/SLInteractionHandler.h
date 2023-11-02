
@interface SLInteractionHandler : NSObject {
    NSString * _appIdentifier;
}

@property (nonatomic, retain) NSString *appIdentifier;

- (void).cxx_destruct;
- (id)appIdentifier;
- (void)dealloc;
- (void)feedbackForHighlightIdentifier:(id)arg1 withType:(unsigned long long)arg2 variant:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)fetchAttributionForAttributionIdentifier:(id)arg1;
- (id)fetchInteractionsWithLimit:(unsigned long long)arg1 variant:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithAppIdentifier:(id)arg1;
- (void)setAppIdentifier:(id)arg1;

@end
