
@interface SYAttributeSetActivityInfo : NSObject <SYUserActivityInfo> {
    CSSearchableItemAttributeSet * _attributeSet;
}

@property (readonly, copy) NSString *activityType;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *attributeSet;
@property (readonly, copy) NSURL *canonicalURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *persistentIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *targetContentIdentifier;
@property (readonly, copy) NSURL *webpageURL;

- (void).cxx_destruct;
- (id)activityType;
- (id)attributeSet;
- (id)canonicalURL;
- (id)initWithAttributeSet:(id)arg1;
- (id)persistentIdentifier;
- (id)targetContentIdentifier;
- (id)webpageURL;

@end
