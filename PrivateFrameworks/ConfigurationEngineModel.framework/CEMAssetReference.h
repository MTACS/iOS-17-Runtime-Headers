
@interface CEMAssetReference : NSObject {
    int  _assettype;
    NSString * _identifier;
}

@property (readonly) int assettype;
@property (readonly, copy) NSString *identifier;

+ (id)referenceForIdentifier:(id)arg1 assetschematype:(id)arg2;
+ (id)referenceForIdentifier:(id)arg1 assettype:(int)arg2;

- (void).cxx_destruct;
- (int)assettype;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 assettype:(int)arg2;

@end
