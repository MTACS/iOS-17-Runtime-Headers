
@interface HDFHIRExtensionProcessor : NSObject <HKJSONVisitorDelegate> {
    NSArray * _collectedUnsupportedModifierExtensions;
    NSMutableArray * _collectingUnsupportedModifierExtensions;
    HDFHIRResourceObject * _resource;
}

@property (nonatomic, retain) NSArray *collectedUnsupportedModifierExtensions;
@property (nonatomic, retain) NSMutableArray *collectingUnsupportedModifierExtensions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HDFHIRResourceObject *resource;
@property (readonly) Class superclass;

+ (id)extensionsForURL:(id)arg1 inJSONDictionary:(id)arg2 error:(id*)arg3;
+ (bool)isSupportedModifierExtension:(id)arg1;

- (void).cxx_destruct;
- (id)collectedUnsupportedModifierExtensions;
- (id)collectingUnsupportedModifierExtensions;
- (id)findUnsupportedModifierExtensions:(id*)arg1;
- (id)init;
- (id)initWithResource:(id)arg1;
- (id)resource;
- (void)setCollectedUnsupportedModifierExtensions:(id)arg1;
- (void)setCollectingUnsupportedModifierExtensions:(id)arg1;
- (long long)visitor:(id)arg1 willVisitArray:(id)arg2;

@end
