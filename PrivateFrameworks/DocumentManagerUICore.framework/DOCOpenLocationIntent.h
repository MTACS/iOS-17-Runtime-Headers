
@interface DOCOpenLocationIntent : INIntent

@property (nonatomic, copy) INFile *folder;
@property (nonatomic, copy) DOCIntentLocation *location;

+ (id)intentFromActivity:(id)arg1;
+ (id)intentFromGenericIntent:(id)arg1;

@end
