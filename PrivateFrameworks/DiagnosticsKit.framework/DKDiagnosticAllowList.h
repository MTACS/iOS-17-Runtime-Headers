
@interface DKDiagnosticAllowList : NSObject {
    NSArray * _allowList;
    NSString * _contactMessage;
}

@property (nonatomic, retain) NSArray *allowList;
@property (nonatomic, readonly) NSString *contactMessage;

- (void).cxx_destruct;
- (id)allowList;
- (id)contactMessage;
- (bool)containsIdentifier:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 contactMessage:(id)arg2;
- (void)setAllowList:(id)arg1;

@end
