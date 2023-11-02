
@interface ATXStableContactRepresentation : NSObject {
    NSString * _cnContactId;
    NSString * _rawIdentifier;
    NSString * _stableContactIdentifier;
}

@property (nonatomic, readonly) NSString *cnContactId;
@property (nonatomic, readonly) NSString *rawIdentifier;
@property (nonatomic, readonly) NSString *stableContactIdentifier;

- (void).cxx_destruct;
- (id)cnContactId;
- (id)initWithStableContactIdentifier:(id)arg1 cnContactId:(id)arg2 rawIdentifier:(id)arg3;
- (id)rawIdentifier;
- (id)stableContactIdentifier;

@end
