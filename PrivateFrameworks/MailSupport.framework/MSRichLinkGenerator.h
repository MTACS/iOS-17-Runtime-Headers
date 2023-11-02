
@interface MSRichLinkGenerator : NSObject <MSRichLinkGeneration>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)linkGenerator;
+ (id)titleConvertToPlainLink;
+ (id)titleConvertToRichLink;
+ (id)titleOpenLink;

- (void)createRichLinkWithURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
