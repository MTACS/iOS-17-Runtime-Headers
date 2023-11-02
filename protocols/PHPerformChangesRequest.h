
@protocol PHPerformChangesRequest <NSObject>

@required

- (void)recordDeleteRequest:(id <PHDeleteChangeRequest>)arg1;
- (void)recordInsertRequest:(id <PHInsertChangeRequest>)arg1;
- (void)recordUpdateRequest:(id <PHUpdateChangeRequest>)arg1;

@end
