
@interface PKInkManager : NSObject {
    NSMutableDictionary * _inks;
    NSMutableDictionary * _supportedInkIdentifiers;
}

@property (nonatomic, readonly) NSMutableDictionary *inks;
@property (nonatomic, readonly) NSMutableDictionary *supportedInkIdentifiers;

+ (void)clearCachedManager;
+ (id)defaultInkManager;

- (void).cxx_destruct;
- (void)addInkBehavior:(id)arg1 forIdentifier:(id)arg2;
- (id)init;
- (id)inkBehaviorForIdentifier:(id)arg1 variant:(id)arg2;
- (id)inkBehaviorForIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3;
- (id)inks;
- (id)supportedInkIdentifierFromIdentifier:(id)arg1;
- (id)supportedInkIdentifiers;

@end
