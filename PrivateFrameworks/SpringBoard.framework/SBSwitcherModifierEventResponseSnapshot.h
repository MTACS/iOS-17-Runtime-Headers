
@interface SBSwitcherModifierEventResponseSnapshot : NSObject {
    NSArray * _responseDescriptions;
    NSArray * _responseNames;
}

@property (nonatomic, readonly) NSArray *responseDescriptions;
@property (nonatomic, readonly) NSArray *responseNames;

- (void).cxx_destruct;
- (id)initWithEventResponse:(id)arg1;
- (id)responseDescriptions;
- (id)responseNames;

@end
