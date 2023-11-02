
@interface AMSURLResponseDecoder : NSObject <AMSResponseDecoding> {
    NSSet * _allowedContentTypes;
    NSIndexSet * _allowedStatusCodes;
}

@property (nonatomic, copy) NSSet *allowedContentTypes;
@property (nonatomic, copy) NSIndexSet *allowedStatusCodes;

- (void).cxx_destruct;
- (id)allowedContentTypes;
- (id)allowedStatusCodes;
- (id)init;
- (id)resultFromResult:(id)arg1 error:(id*)arg2;
- (void)setAllowedContentTypes:(id)arg1;
- (void)setAllowedStatusCodes:(id)arg1;

@end
