
@interface CKDModifyBadgeURLRequest : CKDURLRequest {
    unsigned long long  _badgeValue;
}

@property (nonatomic, readonly) unsigned long long badgeValue;

- (unsigned long long)badgeValue;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 badgeValue:(unsigned long long)arg2;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;

@end
