
@interface DOCIntentLocation : INObject

@property (nonatomic, copy) NSString *domainIdentifier;
@property (nonatomic, copy) NSString *locationIdentifier;
@property (nonatomic, copy) NSString *locationType;

+ (id)imageForType:(id)arg1;
+ (id)intentLocationWithIdentifier:(id)arg1 displayString:(id)arg2 type:(id)arg3;
+ (id)intentLocationWithItem:(id)arg1;
+ (id)intentLocationWithTag:(id)arg1;

@end
