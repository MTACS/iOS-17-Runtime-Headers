
@interface PKPassTileDescriptor : NSObject {
    bool  _defaultEnabled;
    NSString * _defaultStateIdentifier;
    PKPassTileMetadata * _metadata;
    NSDictionary * _states;
}

@property (getter=isDefaultEnabled, nonatomic) bool defaultEnabled;
@property (nonatomic, copy) NSString *defaultStateIdentifier;
@property (nonatomic, retain) PKPassTileMetadata *metadata;
@property (nonatomic, copy) NSDictionary *states;

+ (id)createWithFileURL:(id)arg1;
+ (id)createWithPassDictionary:(id)arg1 privateDictionary:(id)arg2;

- (void).cxx_destruct;
- (id)_init;
- (id)createTileForState:(id)arg1 withBundle:(id)arg2 privateBundle:(id)arg3;
- (id)defaultStateIdentifier;
- (id)init;
- (bool)isDefaultEnabled;
- (id)metadata;
- (void)setDefaultEnabled:(bool)arg1;
- (void)setDefaultStateIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setStates:(id)arg1;
- (id)states;

@end
