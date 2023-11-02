
@interface SXJSONComponentAnchor : SXJSONObject <SXComponentAnchor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long originAnchorPosition;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long targetAnchorPosition;
@property (nonatomic, readonly) NSString *targetComponentIdentifier;

- (long long)anchorAlignmentForString:(id)arg1;
- (long long)originAnchorPositionWithValue:(id)arg1 withType:(int)arg2;
- (long long)targetAnchorPositionWithValue:(id)arg1 withType:(int)arg2;

@end
