
@interface HMDStructuredDataStream : NSObject

@property (readonly, copy) NSError *error;

- (id)error;
- (void)failWithError:(id)arg1;
- (void)failWithReason:(id)arg1;

@end
