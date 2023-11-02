
@interface SXLinkActionURLQualifier : NSObject <SXLinkActionURLQualifier>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowCopyingOfURL:(id)arg1;
- (bool)allowOpenInNewWindowForURL:(id)arg1;
- (bool)allowOpenInSafariForURL:(id)arg1;

@end
