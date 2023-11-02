
@interface PGLocationSummarizedFeature : NSObject <PGSummarizedFeature> {
    NSSet * _intervalsPresent;
    bool  _isMandatoryForKeyAsset;
    NSString * _locationName;
    PGGraphNode<PGGraphLocationOrArea> * _locationNode;
    unsigned long long  _numberOfAssets;
    PGGraphPersonNode * _personNode;
    unsigned short  _subtype;
    unsigned short  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *intervalsPresent;
@property (nonatomic, readonly) bool isMandatoryForKeyAsset;
@property (nonatomic, readonly) NSString *locationName;
@property (nonatomic, readonly) PGGraphNode<PGGraphLocationOrArea> *locationNode;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) PGGraphPersonNode *personNode;
@property (nonatomic, readonly) unsigned short subtype;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned short type;

+ (unsigned short)summarizedFeatureSubtypeForLocationNode:(id)arg1;

- (void).cxx_destruct;
- (id)initWithSubtype:(unsigned short)arg1 intervalsPresent:(id)arg2 numberOfAssets:(unsigned long long)arg3 isMandatoryForKeyAsset:(bool)arg4 locationNode:(id)arg5;
- (id)initWithSubtype:(unsigned short)arg1 intervalsPresent:(id)arg2 numberOfAssets:(unsigned long long)arg3 isMandatoryForKeyAsset:(bool)arg4 locationNode:(id)arg5 personNode:(id)arg6 locationName:(id)arg7;
- (id)intervalsPresent;
- (bool)isMandatoryForKeyAsset;
- (id)locationName;
- (id)locationNode;
- (unsigned long long)numberOfAssets;
- (id)personNode;
- (unsigned short)subtype;
- (unsigned short)type;

@end
