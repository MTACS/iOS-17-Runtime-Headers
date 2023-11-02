
@interface WBSPasswordWarningHideMarker : NSObject {
    unsigned long long  _issueTypes;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned long long issueTypes;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIssueTypes:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)issueTypes;

@end
