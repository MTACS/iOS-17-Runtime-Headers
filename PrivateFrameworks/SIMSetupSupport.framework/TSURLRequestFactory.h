
@interface TSURLRequestFactory : NSObject

+ (id)_jsonBodyWithPostdata:(id)arg1;
+ (id)_urlEncodedBodyWithCarrierPostRawData:(id)arg1;
+ (id)_urlEncodedBodyWithPostdata:(id)arg1;
+ (id)requestWithType:(unsigned long long)arg1 URL:(id)arg2 postdata:(id)arg3;

@end
