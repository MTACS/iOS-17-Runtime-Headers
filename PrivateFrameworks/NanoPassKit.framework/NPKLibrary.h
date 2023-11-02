
@interface NPKLibrary : NSObject {
    bool  _needsRelevancyInformation;
}

@property (nonatomic) bool needsRelevancyInformation;

+ (id)sharedInstance;

- (void)addPassData:(id)arg1 completion:(id /* block */)arg2;
- (bool)needsRelevancyInformation;
- (void)setNeedsRelevancyInformation:(bool)arg1;

@end
