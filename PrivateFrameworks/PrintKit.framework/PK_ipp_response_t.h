
@interface PK_ipp_response_t : PK_ipp_t

@property (readonly) struct ipp_status_t { int x1; } status;

- (id)_descriptionLeader;
- (id)initWithRequest:(id)arg1;
- (struct ipp_status_t { int x1; })status;

@end
