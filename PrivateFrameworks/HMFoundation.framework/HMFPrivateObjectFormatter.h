
@interface HMFPrivateObjectFormatter : NSFormatter <HMFPrivateDescriptionFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultFormatter;

- (id)privateStringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end
