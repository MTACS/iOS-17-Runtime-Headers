
@interface IFResourceMetadata : NSObject <IFResourceMetadata> {
    NSNumber * _diension;
    NSString * _name;
    NSNumber * _scale;
    bool  _selectedVariant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *dimension;
@property (readonly) unsigned long long hash;
@property (retain) NSString *name;
@property (retain) NSNumber *scale;
@property bool selectedVariant;
@property (readonly) Class superclass;

+ (id)metadataWithFileName:(id)arg1;

- (void).cxx_destruct;
- (id)dimension;
- (id)name;
- (id)scale;
- (bool)selectedVariant;
- (void)setDimension:(id)arg1;
- (void)setName:(id)arg1;
- (void)setScale:(id)arg1;
- (void)setSelectedVariant:(bool)arg1;

@end
