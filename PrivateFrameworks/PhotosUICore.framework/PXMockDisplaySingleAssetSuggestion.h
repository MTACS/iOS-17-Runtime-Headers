
@interface PXMockDisplaySingleAssetSuggestion : NSObject <PXDisplaySuggestion> {
    NSDictionary * _actionProperties;
    PHAsset * _asset;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    unsigned short  _state;
    unsigned short  _subtype;
    NSString * _title;
    unsigned short  _type;
}

@property (nonatomic, readonly) NSDictionary *actionProperties;
@property (nonatomic, readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly) unsigned short subtype;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned short type;

- (void).cxx_destruct;
- (id)actionProperties;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endDate;
- (id)fetchKeyAssets;
- (id)initWithAsset:(id)arg1 type:(unsigned short)arg2 subtype:(unsigned short)arg3 title:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)localIdentifier;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)startDate;
- (unsigned short)state;
- (unsigned short)subtype;
- (id)title;
- (unsigned short)type;

@end
